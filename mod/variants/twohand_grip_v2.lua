-- twohand_grip.lua  (v2 - Contractors-style free support hand)
-- Independent 6DoF left hand with proximity-based grip zones.
--
-- Design
-- ------
-- By default the left hand is FREE: it follows the left controller in 6DoF
-- (position + rotation) in weapon-local space, constrained only by arm reach.
-- When the left controller is brought near a grip zone, the hand "grabs":
--   * Foregrip zone -> hand locks to the foregrip (stable two-handed aim).
--   * Magazine zone  -> hand stays free but is tagged for future magazine
--     interaction (telemetry only in this milestone; no mag detach yet).
-- Releasing happens when the controller leaves the zone (hysteresis).
--
-- This replaces the v1 behaviour where the hand was permanently locked to
-- the gun. v1 is backed up in the project's backups/ folder.
--
-- Zones are measured in world space from tunable weapon-local offsets:
--   foregrip : LeftHandTransform.Translation (weapon+0x3C0, default grip)
--   magazine : _G.__twohand_mag_offset  (default {-32, 12, -6})
--   bolt     : _G.__twohand_bolt_offset (default {-40, 2, 8})  (telemetry)
--
-- Toggles / tuning (Lua globals):
--   _G.__twohand_enabled        = false to disable (restores animated pose)
--   _G.__twohand_maxreach       = cm reach clamp for grip-locked mode (def 90)
--   _G.__twohand_maxreach_free  = cm reach clamp for free hand (def 150)
--   _G.__twohand_maxrot         = deg rotation clamp in grip mode (def 120)
--   _G.__twohand_mag_offset / __twohand_bolt_offset = zone centres
--   _G.__twohand_reload_enabled = true to allow dwell-triggered Reload() (def off)
--
-- Debug globals:
--   _G.__twohand_mode           "free" | "grip" | "mag"
--   _G.__twohand_engaged        grip-locked state
--   _G.__twohand_dist           cm from foregrip
--   _G.__twohand_mag_dist / __twohand_bolt_dist
--   _G.__twohand_mag_zone / __twohand_bolt_zone
--   _G.__twohand_stage          last tick stage

local MESH_FROM_PAWN     = 0x280
local ANIM_FROM_MESH     = 0x6B0
local PIK_OFFSET         = 0x308D0
local IK_NESTED          = 0x70
local WEAPON_GRIP_ROT    = 0x3B0
local WEAPON_GRIP_TRANS  = 0x3C0
local WEAPON_FROM_PAWN   = 0x5A0
local ROOT_COMPONENT_OFF = 0x130
local CTW_QUAT           = 0x1C0
local CTW_TRANS          = 0x1D0

local ENGAGE_DIST  = 5.0
local RELEASE_DIST = 10.0
local MAX_REACH    = 90.0   -- grip-locked reach clamp
local MAX_REACH_FREE = 70.0 -- free-hand reach clamp (cm); keep arm from over-extending
local MAX_ROT      = 120.0
local ROT_SMOOTH   = 0.5

local RECOIL_FRAMES = 8
local RECOIL_DEG = 5.0

local magRemoved = false  -- tracks whether magazine mesh is currently hidden
local magCompAddr = nil   -- cached address of SM_ARMagazine_stl_01
local magCompPawn = nil   -- pawn the cached address belongs to

local function findMagComp()
  local pawn = uevr.api.get_local_pawn()
  if not pawn then return nil end
  local pa = pawn:get_address()
  if magCompAddr and magCompPawn == pa then return magCompAddr end
  magCompAddr = nil
  magCompPawn = nil
  local idx = mcp.read_int(pa + 0x5A0 + 0x1C) - 1  -- weapon's UObject index
  -- Actually, find via weapon component path
  local waddr = mcp.read_ptr(pa + 0x5A0)
  if not waddr or waddr == 0 then return nil end
  -- Build the component path using the pawn's map path
  local pname = pawn:get_full_name()
  local mapPath = pname:match("(/Game/.*%.PersistentLevel)")
  -- Find the weapon UObject index
  local widx = mcp.read_int(waddr + 0x1C) - 1
  local magName = "StaticMeshComponent " .. mapPath .. ".BP_AssaultRifle_Modern_Weapon_C_" .. widx .. ".SM_ARMagazine_stl_01"
  local o = uevr.api.find_uobject(magName)
  if o then
    magCompAddr = o:get_address()
    magCompPawn = pa
    print("twohand: found mag comp " .. string.format("0x%X", magCompAddr))
    return magCompAddr
  end
  return nil
end

local function hideMag()
  local addr = findMagComp()
  if addr then
    mcp.write_property(addr, "bVisible", false)
    mcp.write_property(addr, "bHiddenInGame", true)
    magRemoved = true
    print("twohand: magazine HIDDEN")
  end
end

local function showMag()
  local addr = findMagComp()
  if addr then
    mcp.write_property(addr, "bVisible", true)
    mcp.write_property(addr, "bHiddenInGame", false)
    magRemoved = false
    print("twohand: magazine SHOWN")
  end
end
local ikRot = nil
local lastWeapon = 0
local defGrip = nil
local defRot = nil
local rotCalib = nil
local engaged = false
local mode = "free"
local frame = 0
local magZonePrev = false
local boltZonePrev = false
local weaponUObj = nil
local lastWeaponAddr = 0
local magDwell = 0
local boltDwell = 0
local reloadCooldown = 0
local lastChamberRaw = nil
local holdingMag = false       -- true when magazine has been removed and is "in hand"
local magHoldFrames = 0        -- frames since magazine was removed

local proxyPawn = nil
local deadFrames = 0
local untrackedFrames = 0

-- quaternion helpers
local function qnorm(q)
  local n = math.sqrt(q[1]*q[1] + q[2]*q[2] + q[3]*q[3] + q[4]*q[4])
  if n < 1e-6 then return {0,0,0,1} end
  return {q[1]/n, q[2]/n, q[3]/n, q[4]/n}
end
local function qmul(a,b)
  return {
    a[4]*b[1] + a[1]*b[4] + a[2]*b[3] - a[3]*b[2],
    a[4]*b[2] - a[1]*b[3] + a[2]*b[4] + a[3]*b[1],
    a[4]*b[3] + a[1]*b[2] - a[2]*b[1] + a[3]*b[4],
    a[4]*b[4] - a[1]*b[1] - a[2]*b[2] - a[3]*b[3]
  }
end
local function qconj(q) return {-q[1], -q[2], -q[3], q[4]} end
local function qrot(q, v)
  local p = {v[1], v[2], v[3], 0}
  local r = qmul(qmul(q, p), qconj(q))
  return {r[1], r[2], r[3]}
end
local function qdot(a, b)
  return a[1]*b[1] + a[2]*b[2] + a[3]*b[3] + a[4]*b[4]
end
local function qslerp(a, b, t)
  local d = qdot(a, b)
  if d < 0 then
    b = {-b[1], -b[2], -b[3], -b[4]}
    d = -d
  end
  if d > 0.9995 then
    return qnorm({ a[1]+(b[1]-a[1])*t, a[2]+(b[2]-a[2])*t,
                   a[3]+(b[3]-a[3])*t, a[4]+(b[4]-a[4])*t })
  end
  local th = math.acos(d)
  local s = math.sin(th)
  local wa = math.sin((1-t)*th) / s
  local wb = math.sin(t*th) / s
  return qnorm({ a[1]*wa + b[1]*wb, a[2]*wa + b[2]*wb,
                 a[3]*wa + b[3]*wb, a[4]*wa + b[4]*wb })
end

local function readVec3(addr)
  return { mcp.read_float(addr), mcp.read_float(addr+4), mcp.read_float(addr+8) }
end
local function readQuat(addr)
  return qnorm({ mcp.read_float(addr), mcp.read_float(addr+4),
                 mcp.read_float(addr+8), mcp.read_float(addr+12) })
end

local function ensureController(force)
  local pawn = uevr.api.get_local_pawn()
  if not pawn then return false end
  local pa = pawn:get_address()
  if ctrlAddr and not force and proxyPawn == pa then return true end
  if not force and _G.__twohand_ctrl and _G.__twohand_pawn == pa then
    ctrlAddr = _G.__twohand_ctrl
    proxyPawn = pa
    return true
  end
  if ctrlAddr then
    print(string.format("twohand: dropping stale proxy 0x%X (pawn 0x%X)", ctrlAddr, pa))
  end
  ctrlAddr = nil
  _G.__twohand_ctrl = nil
  local fn = pawn:get_full_name()
  local path = fn and fn:match("^%S+ (.*)$")
  if not path then return false end
  local mesh = uevr.api.find_uobject("SkeletalMeshComponent " .. path .. ".CharacterMesh0")
  if not mesh then return false end
  local comp = uevr.api.add_component_by_class(pawn, mesh:get_class())
  if not comp then return false end
  local st = uevr.uobject_hook.get_or_add_motion_controller_state(comp)
  if not st then
    print("twohand: ERROR could not attach controller state")
    return false
  end
  st:set_hand(0)
  st:set_permanent(true)
  ctrlAddr = comp:get_address()
  proxyPawn = pa
  _G.__twohand_ctrl = ctrlAddr
  _G.__twohand_pawn = pa
  print(string.format("twohand: created left-controller proxy 0x%X on pawn 0x%X", ctrlAddr, pa))
  return true
end

local function resolveIk()
  local pawn = uevr.api.get_local_pawn()
  if not pawn then return false end
  local mesh = mcp.read_ptr(pawn:get_address() + MESH_FROM_PAWN)
  if not mesh or mesh == 0 then return false end
  local anim = mcp.read_ptr(mesh + ANIM_FROM_MESH)
  if not anim or anim == 0 then return false end
  ikTrans = anim + PIK_OFFSET + IK_NESTED
  ikRot = ikTrans - 0x10
  return true
end

local function readWeapon()
  local pawn = uevr.api.get_local_pawn()
  if not pawn then return nil end
  local waddr = mcp.read_ptr(pawn:get_address() + WEAPON_FROM_PAWN)
  if not waddr or waddr == 0 then return nil end
  local root = mcp.read_ptr(waddr + ROOT_COMPONENT_OFF)
  if not root or root == 0 then return nil end
  return waddr, root
end

local function updateDefault(waddr)
  defGrip = readVec3(waddr + WEAPON_GRIP_TRANS)
  defRot = readQuat(waddr + WEAPON_GRIP_ROT)
  print(string.format("twohand: weapon 0x%X default grip = (%.3f, %.3f, %.3f)", waddr, defGrip[1], defGrip[2], defGrip[3]))
end

local function writeGrip(v)
  mcp.write_float(ikTrans,   v[1])
  mcp.write_float(ikTrans+4, v[2])
  mcp.write_float(ikTrans+8, v[3])
end
local function writeRot(q)
  mcp.write_float(ikRot,    q[1])
  mcp.write_float(ikRot+4,  q[2])
  mcp.write_float(ikRot+8,  q[3])
  mcp.write_float(ikRot+12, q[4])
end

local function leftTracked()
  local p = uevr.vr.get_pose(1)
  if not p then return false end
  local x, y, z = p[1] or 0, p[2] or 0, p[3] or 0
  local qw = p[7] or 1
  if x == 0 and y == 0 and z == 0 and qw == 1 then return false end
  return true
end

local function tick()
  _G.__twohand_ticks = (_G.__twohand_ticks or 0) + 1
  _G.__twohand_stage = "start"
  if type(_G.__twohand_maxreach) == "number" then MAX_REACH = _G.__twohand_maxreach end
  if type(_G.__twohand_maxreach_free) == "number" then MAX_REACH_FREE = _G.__twohand_maxreach_free end
  if type(_G.__twohand_maxrot) == "number" then MAX_ROT = _G.__twohand_maxrot end

  if _G.__twohand_enabled == false then
    if engaged then
      engaged = false
      rotCalib = nil
      mode = "free"
      if defGrip then writeGrip(defGrip) end
      if defRot then writeRot(defRot) end
    end
    _G.__twohand_stage = "disabled"
    _G.__twohand_engaged = false
    _G.__twohand_mode = "disabled"
    return
  end
  if not ctrlAddr and not ensureController() then _G.__twohand_stage = "noctrl"; return end
  if not ikTrans and not resolveIk() then _G.__twohand_stage = "noik"; return end

  local waddr, root = readWeapon()
  if not waddr then _G.__twohand_stage = "noweapon"; return end
  if waddr ~= lastWeapon then
    lastWeapon = waddr
    weaponUObj = nil
    if engaged then
      engaged = false
      rotCalib = nil
      mode = "free"
    end
    updateDefault(waddr)
    if defGrip then writeGrip(defGrip) end
    if defRot then writeRot(defRot) end
  end
  if not weaponUObj and waddr ~= 0 then
    pcall(function()
      local pawn = uevr.api.get_local_pawn()
      local pname = pawn:get_full_name()
      local mapPath = pname:match("(/Game/.*%.PersistentLevel)")
      local idx = mcp.read_int(waddr + 0x1C) - 1
      local wname = "BP_AssaultRifle_Modern_Weapon_C " .. mapPath .. ".BP_AssaultRifle_Modern_Weapon_C_" .. idx
      local o = uevr.api.find_uobject(wname)
      if o then weaponUObj = o end
    end)
  end
  if not defGrip then _G.__twohand_stage = "nodef"; return end

  -- shot detection for optional recoil (grip mode only)
  local chamberRaw = mcp.read_float(waddr + 0x5B4)
  if lastChamberRaw ~= nil and chamberRaw == 0 and lastChamberRaw ~= 0
     and _G.__twohand_recoil == true then
    recoilFrames = RECOIL_FRAMES
  end
  lastChamberRaw = chamberRaw

  if leftTracked() then
    untrackedFrames = 0
  else
    untrackedFrames = untrackedFrames + 1
  end
  if untrackedFrames > 15 then
    _G.__twohand_stage = "untracked"
    _G.__twohand_engaged = false
    _G.__twohand_mode = "untracked"
    if engaged then
      engaged = false
      rotCalib = nil
      mode = "free"
      writeGrip(defGrip)
      if defRot then writeRot(defRot) end
      print("twohand: released (left controller not tracked)")
    else
      writeGrip(defGrip)
      if defRot then writeRot(defRot) end
    end
    return
  end

  local wq = readQuat(root + CTW_QUAT)
  local wp = readVec3(root + CTW_TRANS)
  local cp = readVec3(ctrlAddr + CTW_TRANS)
  local cq = readQuat(ctrlAddr + CTW_QUAT)
  local localCtrl = qmul(qconj(wq), cq)

  -- zones
  local magOff = _G.__twohand_mag_offset or {-32, 12, -6}
  local boltOff = _G.__twohand_bolt_offset or {-40, 2, 8}
  local mg = qrot(wq, {magOff[1], magOff[2], magOff[3]})
  local bg = qrot(wq, {boltOff[1], boltOff[2], boltOff[3]})
  local magCx, magCy, magCz = wp[1]+mg[1], wp[2]+mg[2], wp[3]+mg[3]
  local boltCx, boltCy, boltCz = wp[1]+bg[1], wp[2]+bg[2], wp[3]+bg[3]
  local magDx, magDy, magDz = cp[1]-magCx, cp[2]-magCy, cp[3]-magCz
  local boltDx, boltDy, boltDz = cp[1]-boltCx, cp[2]-boltCy, cp[3]-boltCz
  local magDist = math.sqrt(magDx*magDx + magDy*magDy + magDz*magDz)
  local boltDist = math.sqrt(boltDx*boltDx + boltDy*boltDy + boltDz*boltDz)
  _G.__twohand_mag_dist = magDist
  _G.__twohand_bolt_dist = boltDist

  if cp[1] == 0 and cp[2] == 0 and cp[3] == 0
     and mcp.read_float(ctrlAddr + CTW_QUAT + 12) == 0 then
    deadFrames = deadFrames + 1
    if deadFrames > 30 then
      deadFrames = 0
      print("twohand: proxy not driven, recreating")
      ensureController(true)
      return
    end
  else
    deadFrames = 0
  end

  local d = { cp[1]-wp[1], cp[2]-wp[2], cp[3]-wp[3] }
  local g = qrot(wq, defGrip)
  local gx, gy, gz = wp[1]+g[1], wp[2]+g[2], wp[3]+g[3]
  local ex, ey, ez = cp[1]-gx, cp[2]-gy, cp[3]-gz
  local dist = math.sqrt(ex*ex + ey*ey + ez*ez)
  _G.__twohand_dist = dist

  local MAG_ZONE = 30.0
  local BOLT_ZONE = 25.0
  local MAG_DWELL = 1
  local magInZone = magDist < MAG_ZONE
  local boltInZone = boltDist < BOLT_ZONE
  _G.__twohand_mag_zone = magInZone
  _G.__twohand_bolt_zone = boltInZone
  if magInZone then magDwell = magDwell + 1 else magDwell = 0 end
  if boltInZone then boltDwell = boltDwell + 1 else boltDwell = 0 end
  _G.__twohand_mag_dwell = magDwell
  _G.__twohand_bolt_dwell = boltDwell

  if reloadCooldown > 0 then reloadCooldown = reloadCooldown - 1 end
  if _G.__twohand_reload_enabled ~= false and reloadCooldown == 0 and weaponUObj and not engaged then
    -- MAGAZINE REMOVAL: dwell in mag zone -> hide mag mesh, mark as removed (in hand)
    if magDwell == MAG_DWELL and not magRemoved then
      hideMag()
      holdingMag = true
      magHoldFrames = 0
      -- Do NOT call Reload() yet — wait for physical insertion
      print("twohand: mag zone dwell -> magazine REMOVED (in hand)")
      reloadCooldown = 30
    end
    -- MAGAZINE INSERTION: hand in bolt zone while holding mag -> show mag + chamber + Reload()
    if boltDwell == MAG_DWELL and magRemoved then
      showMag()
      holdingMag = false
      pcall(function() weaponUObj:call_function("Reload") end)
      pcall(function() weaponUObj:call_function("FinishReload_SERVER") end)
      pcall(function() weaponUObj:call_function("EmergencyReload_SERVER") end)
      print("twohand: bolt zone dwell -> magazine INSERTED + chambered")
      reloadCooldown = 120
    end
  end

  -- state machine: grip engage/release with hysteresis
  if engaged then
    if dist > RELEASE_DIST then
      engaged = false
      rotCalib = nil
      mode = "free"
      writeGrip(defGrip)
      if defRot then writeRot(defRot) end
      print("twohand: released")
    else
      mode = "grip"
    end
  else
    if dist < ENGAGE_DIST then
      engaged = true
      rotCalib = qmul(qconj(localCtrl), readQuat(ikRot))
      mode = "grip"
      print("twohand: engaged grip")
    elseif magInZone then
      mode = "mag"
    else
      mode = "free"
    end
  end

  -- write transforms per mode
  if mode == "grip" then
    _G.__twohand_stage = "grip"
    writeGrip(defGrip)  -- lock to foregrip
    if rotCalib then
      local cur = readQuat(ikRot)
      local target = qmul(localCtrl, rotCalib)
      if recoilFrames > 0 and _G.__twohand_recoil == true then
        local frac = recoilFrames / RECOIL_FRAMES
        local ang = (RECOIL_DEG * frac) * math.pi / 180
        local rq = { math.sin(ang/2), 0, 0, math.cos(ang/2) }
        target = qmul(rq, target)
        recoilFrames = recoilFrames - 1
      end
      local dot = qdot(cur, target)
      if dot < 0 then dot = -dot end
      if dot > 1 then dot = 1 end
      local angDeg = 2 * math.acos(dot) * 180 / math.pi
      if angDeg <= MAX_ROT then
        writeRot(qslerp(cur, target, ROT_SMOOTH))
      end
    end
  else
    -- free or mag: hand follows controller in 6DoF
    _G.__twohand_stage = mode
    if rotCalib == nil then
      rotCalib = qmul(qconj(localCtrl), readQuat(ikRot))
    end
    local reach = (mode == "mag") and MAX_REACH_FREE or MAX_REACH_FREE
    local localPos = qrot(qconj(wq), d)
    local dx = localPos[1] - defGrip[1]
    local dy = localPos[2] - defGrip[2]
    local dz = localPos[3] - defGrip[3]
    local r = math.sqrt(dx*dx + dy*dy + dz*dz)
    if r > reach then
      local s = reach / r
      localPos = { defGrip[1] + dx*s, defGrip[2] + dy*s, defGrip[3] + dz*s }
    end
    writeGrip(localPos)
    if rotCalib then
      local cur = readQuat(ikRot)
      local target = qmul(localCtrl, rotCalib)
      writeRot(qslerp(cur, target, ROT_SMOOTH))
    end
  end

  _G.__twohand_engaged = engaged
  _G.__twohand_mode = mode
  _G.__twohand_recoil_frames = recoilFrames
  frame = frame + 1
  resolveIk()
end

if _G.__twohand_cb then
  pcall(function() mcp.remove_callback(_G.__twohand_cb) end)
end

local okInit, errInit = pcall(function()
  ensureController()
  resolveIk()
  _G.__twohand_ticks = 0
  _G.__twohand_stage = "loaded"
  _G.__twohand_maxreach = MAX_REACH
  _G.__twohand_maxreach_free = MAX_REACH_FREE
  _G.__twohand_maxrot = MAX_ROT
end)
if not okInit then
  print("twohand v2 INIT ERROR: " .. tostring(errInit))
  _G.__twohand_load_err = tostring(errInit)
end

local okCb, errCb = pcall(function()
  _G.__twohand_cb = mcp.on_frame(function()
    local ok, err = pcall(tick)
    if not ok then
      _G.__twohand_err = tostring(err)
      _G.__twohand_stage = "ERROR"
    end
  end)
end)
if not okCb then
  print("twohand v2 CALLBACK ERROR: " .. tostring(errCb))
  _G.__twohand_load_err = tostring(errCb)
else
  print("twohand v2 loaded, ctrl=" .. tostring(ctrlAddr) .. " ikTrans=" .. tostring(ikTrans))
end
