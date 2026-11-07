-- twohand_grip.lua
-- Two-handed grip for SWAT Commander: Prologue (UE 4.27) via UEVR-MCP.
--
-- Mechanism
-- ---------
-- The character AnimBP (Operator_AnimBP_C) drives the left arm with a
-- TwoBoneIK node whose effector is the virtual bone "VB hand_L1". That bone
-- is offset by AnimGraphNode_ModifyBone_50/51 using the weapon grip vector
-- stored in the AnimBP variable:
--
--     PrimaryIKHands.LHandPosition_<guid>.Translation
--
-- The game only writes that variable on weapon equip, so it is a genuine
-- input (not a per-frame readback). Writing it moves the left hand.
--
-- This script creates a dummy SceneComponent on the pawn, attaches it to the
-- left motion controller, reads its UE-space world transform every frame,
-- converts it into weapon-local space, and writes it into the IK variable.
-- Result: the in-game left hand follows the left controller (two-handed grip).
--
-- Toggle at runtime:  _G.__twohand_enabled = false   -- disable
--                     _G.__twohand_enabled = true    -- re-enable
--
-- Offsets are for the current build of SWAT Commander: Prologue (UE 4.27).

local MESH_FROM_PAWN     = 0x280   -- APawn::Mesh (USkeletalMeshComponent*)
local ANIM_FROM_MESH     = 0x6B0   -- USkeletalMeshComponent::AnimScriptInstance
local PIK_OFFSET         = 0x308D0 -- Operator_AnimBP_C::PrimaryIKHands
local IK_NESTED          = 0x70    -- LHandPosition_<guid>.Translation inside PrimaryIKHands
local WEAPON_GRIP_ROT    = 0x3B0   -- AWeaponBase::LeftHandTransform.Rotation (quat)
local WEAPON_GRIP_TRANS  = 0x3C0   -- AWeaponBase::LeftHandTransform.Translation
local WEAPON_FROM_PAWN   = 0x5A0   -- APawn-ish::CurrentWeapon
local ROOT_COMPONENT_OFF = 0x130   -- AActor::RootComponent
local CTW_QUAT           = 0x1C0   -- USceneComponent::ComponentToWorld quat
local CTW_TRANS          = 0x1D0   -- USceneComponent::ComponentToWorld translation

local ENGAGE_DIST  = 45.0 -- cm: engage when the left controller is this close to the weapon
local RELEASE_DIST = 65.0 -- cm: release when farther than this (hysteresis)

-- Step 3 (Phase 2): reach clamping. In controller-follow mode the support hand
-- may only travel MAX_REACH cm from the foregrip; beyond that it is clamped to
-- the sphere surface instead of snapping to the controller (prevents the arm
-- from over-extending and the IK from flipping).
local MAX_REACH = 90.0  -- cm
-- Step 3: rotation clamp. If the wrist rotates more than MAX_ROT degrees from
-- the calibrated grab pose, stop driving rotation (hold last pose) so the hand
-- cannot flip or twist past a sane limit.
local MAX_ROT   = 120.0 -- degrees

-- Step 6 (Phase 2): recoil. Detect a shot by watching InChamberAmmo (+0x5B4)
-- change, then kick the IK rotation for RECOIL_FRAMES frames. Opt-in via
-- _G.__twohand_recoil = true (default off) so the base behaviour is untouched.
local RECOIL_FRAMES = 8
local RECOIL_DEG = 5.0
local lastChamberRaw = nil
local recoilFrames = 0

local ctrlAddr = nil
local ikTrans = nil
local ikRot = nil
local lastWeapon = 0
local defGrip = nil
local defRot = nil
local rotCalib = nil   -- controller->hand rotation offset captured at engage
local engaged = false
local frame = 0
local magZonePrev = false   -- previous frame mag-zone state (edge detection)
local boltZonePrev = false  -- previous frame bolt-zone state
local weaponUObj = nil     -- cached UObject for the current weapon (for Reload() calls)
local lastWeaponAddr = 0
local magDwell = 0         -- frames hand has been in mag zone
local boltDwell = 0       -- frames hand has been in bolt zone
local reloadCooldown = 0   -- frames before another reload can trigger

local ROT_SMOOTH = 0.5 -- 0..1 slerp per frame while gripping (1 = instant)

-- ---------- quaternion helpers ----------
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

-- Create (once per pawn) a dummy SceneComponent attached to the left controller.
local proxyPawn = nil    -- pawn the proxy was created on
local deadFrames = 0     -- consecutive frames the proxy read as all-zero
local untrackedFrames = 0 -- consecutive frames the controller pose was identity

local function ensureController(force)
  local pawn = uevr.api.get_local_pawn()
  if not pawn then return false end
  local pa = pawn:get_address()

  -- Reuse only if it belongs to the current pawn and we are not forcing.
  if ctrlAddr and not force and proxyPawn == pa then return true end
  if not force and _G.__twohand_ctrl and _G.__twohand_pawn == pa then
    ctrlAddr = _G.__twohand_ctrl
    proxyPawn = pa
    return true
  end
  if ctrlAddr then
    print(string.format("twohand: dropping stale proxy 0x%X (pawn 0x%X)",
      ctrlAddr, pa))
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
  st:set_hand(0)        -- 0 = LEFT
  st:set_permanent(true)
  ctrlAddr = comp:get_address()
  proxyPawn = pa
  _G.__twohand_ctrl = ctrlAddr
  _G.__twohand_pawn = pa
  print(string.format("twohand: created left-controller proxy 0x%X on pawn 0x%X",
    ctrlAddr, pa))
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
  ikRot = ikTrans - 0x10   -- FTransform: quat at +0, translation at +16
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
  print(string.format("twohand: weapon 0x%X default grip = (%.3f, %.3f, %.3f)",
    waddr, defGrip[1], defGrip[2], defGrip[3]))
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

-- UEVR reports an untracked controller as an identity pose at the origin.
-- Without this guard the proxy collapses onto the HMD, which is close enough
-- to the weapon to trigger a false "engage" and snaps the left hand to the face.
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
  -- Allow runtime tuning of the clamps via globals.
  if type(_G.__twohand_maxreach) == "number" then MAX_REACH = _G.__twohand_maxreach end
  if type(_G.__twohand_maxrot) == "number" then MAX_ROT = _G.__twohand_maxrot end
  if _G.__twohand_enabled == false then
    -- Leaving it disabled must restore the animated pose, not freeze the hand
    -- wherever it was last written.
    if engaged then
      engaged = false
      rotCalib = nil
      if defGrip then writeGrip(defGrip) end
      if defRot then writeRot(defRot) end
    end
    _G.__twohand_stage = "disabled"
    _G.__twohand_engaged = false
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
    end
    updateDefault(waddr)
    if defGrip then writeGrip(defGrip) end
    if defRot then writeRot(defRot) end
  end
  -- Resolve the weapon UObject (for calling Reload() etc.) lazily.
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

  -- Step 6: detect a shot from InChamberAmmo (+0x5B4) dropping to zero.
  local chamberRaw = mcp.read_float(waddr + 0x5B4)
  if lastChamberRaw ~= nil and chamberRaw == 0 and lastChamberRaw ~= 0
     and _G.__twohand_recoil == true then
    recoilFrames = RECOIL_FRAMES
  end
  lastChamberRaw = chamberRaw

  -- A single identity pose frame happens occasionally; only treat the
  -- controller as gone after ~15 consecutive ones so the grip does not flicker.
  if leftTracked() then
    untrackedFrames = 0
  else
    untrackedFrames = untrackedFrames + 1
  end
  if untrackedFrames > 15 then
    _G.__twohand_stage = "untracked"
    _G.__twohand_engaged = false
    if engaged then
      engaged = false
      rotCalib = nil
      writeGrip(defGrip)
      if defRot then writeRot(defRot) end
      print("twohand: released (left controller not tracked)")
    end
    return
  end

  local wq = readQuat(root + CTW_QUAT)
  local wp = readVec3(root + CTW_TRANS)
  local cp = readVec3(ctrlAddr + CTW_TRANS)
  local cq = readQuat(ctrlAddr + CTW_QUAT)
  local localCtrl = qmul(qconj(wq), cq)   -- controller rotation in weapon-local space

  -- Step 11/13: interaction zones. Both are measured in world space from
  -- tunable weapon-local offsets (override via _G.__twohand_mag_offset /
  -- _G.__twohand_bolt_offset).
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

  -- A destroyed/undriven proxy reads as all-zero. UEVR writes a real world
  -- transform every frame while the controller is tracked, so all-zero for
  -- ~30 frames means the component is dead -> rebuild it.
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

  -- Measure the grab distance from the weapon's default LEFT-HAND GRIP POINT
  -- (LeftHandTransform.Translation transformed to world space), not from the
  -- weapon actor origin. The grip point is where the support hand belongs, so
  -- "hand near the foregrip" is what triggers the grab. Using the actor origin
  -- offsets the whole zone by ~30 cm and makes the grip feel unreachable.
  local g = qrot(wq, defGrip)
  local gx, gy, gz = wp[1]+g[1], wp[2]+g[2], wp[3]+g[3]
  local ex, ey, ez = cp[1]-gx, cp[2]-gy, cp[3]-gz
  local dist = math.sqrt(ex*ex + ey*ey + ez*ez)
  _G.__twohand_dist = dist

  -- Step 11/13: interaction zones with dwell-triggered actions.
  local MAG_ZONE = 20.0   -- cm: hand near the magazine grip point
  local BOLT_ZONE = 18.0  -- cm: hand near the bolt
  local MAG_DWELL = 5     -- frames of continuous presence before triggering
  local magInZone = magDist < MAG_ZONE
  local boltInZone = boltDist < BOLT_ZONE
  _G.__twohand_mag_zone = magInZone
  _G.__twohand_bolt_zone = boltInZone

  if magInZone then magDwell = magDwell + 1 else magDwell = 0 end
  if boltInZone then boltDwell = boltDwell + 1 else boltDwell = 0 end
  _G.__twohand_mag_dwell = magDwell
  _G.__twohand_bolt_dwell = boltDwell

  if reloadCooldown > 0 then reloadCooldown = reloadCooldown - 1 end

  -- Only act when the opt-in flag is set, so default behaviour is untouched.
  if _G.__twohand_reload_enabled == true and reloadCooldown == 0 and weaponUObj then
    if magDwell == MAG_DWELL then
      pcall(function() weaponUObj:call_function("Reload") end)
      print("twohand: mag zone dwell -> Reload()")
      reloadCooldown = 60
    end
    if boltDwell == MAG_DWELL then
      -- Chamber a round after a (manual) reload: try FinishReload then EmergencyReload.
      pcall(function() weaponUObj:call_function("FinishReload_SERVER") end)
      pcall(function() weaponUObj:call_function("EmergencyReload_SERVER") end)
      print("twohand: bolt zone dwell -> chamber")
      reloadCooldown = 60
    end
  end

  if engaged then
    if dist > RELEASE_DIST then
      engaged = false
      rotCalib = nil
      writeGrip(defGrip)
      if defRot then writeRot(defRot) end
      print("twohand: released")
    end
  else
    if dist < ENGAGE_DIST then
      engaged = true
      -- Grab offset: keep the hand where it is at the moment of the grab and
      -- then follow the controller's rotation from there.
      rotCalib = qmul(qconj(localCtrl), readQuat(ikRot))
      _G.__twohand_rotcalib = rotCalib
      print("twohand: engaged")
    end
  end

  if engaged then
    _G.__twohand_stage = "engaged"
    if _G.__twohand_lock_pos ~= false then
      -- LOCK TO THE GUN: the hand stays on the weapon's foregrip and moves
      -- with the weapon. The controller only drives rotation and the
      -- grab/release state. Set _G.__twohand_lock_pos = false to go back to
      -- letting the hand follow the controller position instead.
      writeGrip(defGrip)
    else
      -- Controller-follow mode with reach clamping (step 3): the support hand
      -- may not travel more than MAX_REACH cm from the foregrip.
      local localPos = qrot(qconj(wq), d)
      local dx = localPos[1] - defGrip[1]
      local dy = localPos[2] - defGrip[2]
      local dz = localPos[3] - defGrip[3]
      local r = math.sqrt(dx*dx + dy*dy + dz*dz)
      if r > MAX_REACH then
        local s = MAX_REACH / r
        localPos = { defGrip[1] + dx*s, defGrip[2] + dy*s, defGrip[3] + dz*s }
      end
      writeGrip(localPos)
    end
    if rotCalib then
      local cur = readQuat(ikRot)
      local target = qmul(localCtrl, rotCalib)
      -- Step 6: apply recoil kick (pitch up) while recoilFrames remain.
      if recoilFrames > 0 and _G.__twohand_recoil == true then
        local frac = recoilFrames / RECOIL_FRAMES
        local ang = (RECOIL_DEG * frac) * math.pi / 180
        -- pitch up = rotation around local X axis by +ang
        local rq = { math.sin(ang/2), 0, 0, math.cos(ang/2) }
        target = qmul(rq, target)
        recoilFrames = recoilFrames - 1
      end
      -- Rotation clamp (step 3): skip the write if the wrist has twisted
      -- beyond MAX_ROT degrees, so the hand cannot flip.
      local dot = qdot(cur, target)
      if dot < 0 then dot = -dot end
      if dot > 1 then dot = 1 end
      local angDeg = 2 * math.acos(dot) * 180 / math.pi
      if angDeg <= MAX_ROT then
        writeRot(qslerp(cur, target, ROT_SMOOTH))
      end
    end
  else
    _G.__twohand_stage = string.format("idle dist=%.1f", dist)
  end

  _G.__twohand_engaged = engaged
  _G.__twohand_recoil_frames = recoilFrames
  frame = frame + 1
  resolveIk()   -- cheap: re-reads pawn->mesh->anim so level changes self-heal
end

-- Remove our previous frame callback so hot-reloads do not stack ticks.
if _G.__twohand_cb then
  pcall(function() mcp.remove_callback(_G.__twohand_cb) end)
end

ensureController()
resolveIk()
_G.__twohand_ticks = 0
_G.__twohand_stage = "loaded"
_G.__twohand_maxreach = MAX_REACH
_G.__twohand_maxrot = MAX_ROT
_G.__twohand_cb = mcp.on_frame(function()
  local ok, err = pcall(tick)
  if not ok then
    _G.__twohand_err = tostring(err)
    _G.__twohand_stage = "ERROR"
  end
end)
print("twohand: loaded, ctrl=" .. tostring(ctrlAddr) .. " ikTrans=" .. tostring(ikTrans))
