# SWAT Commander: Prologue — UEVR 6DOF research

Research date: 2026-11-05
Machine: Windows 11 (machine-specific username and build details omitted)

---

## 1. What is installed

| Component | Path | Notes |
|---|---|---|
| UEVR-MCP v1.0.0 | `<UEVR_MCP_DIR>` | Official GitHub release, SHA-256 `6DDA2BDB…FDEFB68` |
| MCP server | `bin\UevrMcpServer.exe` | .NET 9, self-contained, stdio MCP + CLI verbs |
| Game plugin | `bin\uevr_mcp.dll` → installed into the game's UEVR profile | 4,126,208 bytes |
| UEVR backend | `bin\UEVRBackend.dll` | 15,645,184 bytes, branch `ue57performance` (local backend source path omitted) |
| Dumper-7 | `bin\dumper7.dll` | fallback dumper |
| OpenCode registration | `<USER_PROFILE>/.config/opencode/opencode.json` | server name `uevr`, 182 tools |
| Game plugin (live) | `%APPDATA%\UnrealVRMod\SWATCommanderPrologue-Win64-Shipping\plugins\uevr_mcp.dll` | |
| Dumper sentinel | `%APPDATA%\UnrealVRMod\SWATCommanderPrologue-Win64-Shipping\dumper_mode` | **currently active** |

> The release installer's `install.ps1` contains non-ASCII characters but no BOM, which Windows
> PowerShell 5.1 mis-parses. A UTF-8-BOM copy `install.run.ps1` was created next to it and used.
> The original file was not modified.

### Launch path
`install.ps1` writes the plugin + `dumper_mode` sentinel but cannot inject (its `attach` verb
expects a source-repo layout). Injection is done through the MCP tool `uevr_setup_game` with
explicit DLL paths, or the equivalent CLI.

---

## 2. Verified game facts

| Fact | Value | Source |
|---|---|---|
| Steam AppID | `2428730` | `appmanifest_2428730.acf` |
| Game exe | `…\SWAT Commander - Prologue\SWATCommander\Binaries\Win64\SWATCommanderPrologue-Win64-Shipping.exe` | 94,461,440 bytes |
| **Engine** | **Unreal Engine 4.27** | UEVR log: `Found version 4.27 from executable`; `WindowsNoEditor` paks; PhysX3 third-party |
| Build | `v.0.8.0.0 - DX11` | window title |
| Content | 7 pak chunks, ~9.9 GB | `SWATCommander\Content\Paks` |
| Game module | `/Script/SWATCommander` | reflection dump |
| VR runtime (when enabled) | SteamVR/OpenXR, vendor 10462 (Meta) | earlier UEVR log |

> `Branch: ue57performance` in the UEVR log is **UEVR's own backend branch name**, not the
> game's engine version. The game is UE 4.27.

---

## 3. How the AI is connected to the game

```
OpenCode (this agent)
   │  MCP over stdio
   ▼
UevrMcpServer.exe  ────────── HTTP localhost (local port omitted) ──────────┐
   │  CreateRemoteThread + LoadLibraryA                      │
   ▼                                                         │
UEVRBackend.dll  ──loads──▶  uevr_mcp.dll  ──────────────────┘
   │                              │ runs on the game thread
   ▼                              ▼
UE 4.27 render/engine hooks    GUObjectArray, reflection, Lua, input
```

- The plugin endpoint is bound to loopback only; it is not intended to be exposed to the network.
- Reflection is read by walking `GUObjectArray` (~380,000 objects) on the game thread.
- `uevr_get_status` / `uevr_is_ready` work even when HTTP is down (named-pipe fallback).

### Confirmed live state (main menu)
```
modules: UEVRBackend.dll + uevr_mcp.dll, local endpoint responsive
PlayerController : BP_PC_Briefing_C
Pawn             : Character (menu placeholder)
World            : /Game/Maps/ServiceMaps/Briefing
CameraManager    : PCM_MenuCameraManager_C
hmdActive        : false (dumper mode — VR is intentionally disabled)
```

---

## 4. What was dumped (`<RESEARCH_OUTPUT_DIR>`)

| Output | Size | Use |
|---|---|---|
| `SWATCommanderPrologue-Win64-Shipping.usmap` | 1.21 MB | FModel / CUE4Parse / UAssetAPI — 6,345 types, 1,341 enums |
| `SWATCommander-reflection.json` | 1.10 MB | all 354 `/Script/SWATCommander` types with fields + methods |
| `MirrorProject\` | 354 headers | buildable UE 4.27 project: 117 classes, 139 structs, 98 enums |
| `REBundle\uevr_types.jmap` | 15.1 MB | Binary Ninja / IDA / Ghidra type import (3,592 classes, 2,753 structs) |
| `REBundle\uevr_types.hpp` | 3.64 MB | C++ header form of the same |
| `REBundle\import_*.py` | — | ready-made importers |

---

## 5. The classes that matter for a 6DOF profile

### `ATSCharacterBase : ACharacter` — the player
| Field | Offset | Why it matters |
|---|---|---|
| `CurrentWeapon` (`AEquipmentBase*`) | `+0x5A0` | the weapon to attach to the right controller |
| `PrimaryWeapon` / `SecondaryWeapon` / `SpecialWeapon` | `+0x578 / 0x580 / 0x588` | slot switching |
| `Mesh` (`SkeletalMeshComponent`) | inherited | body/hands rendering, hide for VR |
| `PerceptionHeadSocketName` | `+0x614` | `"Head"` socket exists on the skeleton |

### `AEquipmentBase : AInteractiveActor` — every held item
This is the important one: **the game already has a full hand-IK target system.**

| Field | Offset |
|---|---|
| `RightHandTransform` | `+0x380` |
| `LeftHandTransform` | `+0x3B0` |
| `LeftHandVFrontGripTransform` (vertical) | `+0x3E0` |
| `LeftHandAFrontGripTransform` (angular) | `+0x410` |
| `LeftHandHFrontGripTransform` (horizontal) | `+0x440` |
| `RHandSemireadyTransform` / `RHandRelaxedTransform` | `+0x4D0 / +0x500` |
| `SightTransformADS` | `+0x350` |
| `RHandJointTargetLocation` / `LHandJointTargetLocation` | `+0x560 / +0x56C` |
| `RootMesh` | `+0x340` |

`EGripEnum { None, Vertical, Angular, Horizontal }` matches the three foregrip transforms.

### `AWeaponBase : AEquipmentBase` — firearms
| Field / method | Offset | Notes |
|---|---|---|
| `FireRate` | `+0x5A8` | |
| `InMagAmmo` / `MagCapacity` | `+0x5B0 / +0x5CC` | |
| `IsInHand()` | method | BlueprintImplementableEvent |
| `Reload()` | method | BlueprintImplementableEvent |
| `GetWeaponHandlerCharacter()` | method | owning character |
| `HasFlashlight()` | method | |

> `BlueprintImplementableEvent` means the actual logic lives in Blueprints, not C++.
> A VR mod can call them, but cannot see their bodies from reflection alone.

---

## 6. How UEVR 6DOF profiles are actually built

There are four independent layers. A profile is not "one setting" — it is all four together.

### Layer 1 — head tracking (stereo + camera)
UEVR hooks the render pipeline and replaces the view with a stereo pair. Head pose from
OpenXR drives the camera. The hard part is finding the right camera:

- If the game uses a standard `APlayerCameraManager`, UEVR finds it automatically.
- If the camera is a Blueprint component on the pawn (likely here — the C++ `ATSCharacterBase`
  has **no** camera component), UEVR's "camera" panel must be pointed at the right component,
  or the profile uses `scripts\` Lua to override `CalcCamera`.
- **This is the first thing to check in-game**, because the menu pawn is a plain `Character`
  with no camera at all. It only exists once a mission loads.

### Layer 2 — roomscale / 6DOF position
UEVR separates *rotation* from *translation*. "Roomscale" movement shifts the camera rig in world
space. For a seated/standing shooter the usual settings are:

- 6DOF enabled, world-scale ~100 (1 UE unit = 1 cm),
- camera offset tuned so the eyes sit at the head socket,
- decoupled pitch/roll so the body does not rotate with the head.

### Layer 3 — motion controllers → UObjectHook
UObjectHook is UEVR's mechanism for attaching a live game object to a controller. It works by
identifying the object (by class + name/address) and continuously writing a transform derived from
the controller pose, with per-attachment offset/rotation/scale.

For this game the natural targets are:

| Controller | Object | Why |
|---|---|---|
| Right | `CurrentWeapon` (`AWeaponBase` actor) | weapon follows the right hand |
| Left | foregrip | two-handed hold; use `LeftHand?FrontGripTransform` as the reference |
| Head | `Mesh` | hide the first-person head/arms, or attach a body |

Because `AEquipmentBase` exposes `RightHandTransform` / `LeftHand*FrontGripTransform` and
`RHandJointTargetLocation`, an advanced profile can drive the **game's own IK** from VR poses
instead of moving the weapon actor. That produces correct arm animation and two-handed holds —
but it needs Lua, because those fields are written every frame by the game's animation code.

### Layer 4 — input
UEVR maps controller buttons to game actions. This game has a Blueprint input layer, so most
bindings are discoverable through `InputComponent` actions rather than C++ functions.

---

## 7. Profile file layout

```
%APPDATA%\UnrealVRMod\SWATCommanderPrologue-Win64-Shipping\
├── config.txt        # camera / rendering / 6DOF settings
├── cameras.txt       # discovered camera components
├── uobjecthook\      # saved attachments (weapons → controllers)
├── scripts\          # Lua scripts (auto-loaded)
└── plugins\          # uevr_mcp.dll lives here
```

`uevr_save_config` / `uevr_reload_config` / `uevr_recenter` MCP tools let the agent iterate
without restarting the game.

---

## 8. Current state and next steps

### Done
- [x] MCP server registered in OpenCode (182 tools, connected)
- [x] Plugin + backend injected into the running game
- [x] Live reflection verified (player, camera, singletons, 354 game types)
- [x] USMAP + reflection JSON + mirror project + RE bundle generated

### Not done yet (requires in-game state)
- [ ] Load an actual mission so the gameplay pawn/weapon/camera exist
- [ ] Identify the first-person camera component (Blueprint-side)
- [ ] Turn off dumper mode and confirm stereo rendering in the headset
- [ ] Build the first UObjectHook attachment (weapon → right controller)
- [ ] Test two-handed grip using `LeftHand?FrontGripTransform`

### To switch from inspection to VR
```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File `
  "<UEVR_MCP_DIR>\tools\disable-dumper-mode.ps1" `
  -GameExe "<STEAM_LIBRARY>\steamapps\common\SWAT Commander - Prologue\SWATCommander\Binaries\Win64\SWATCommanderPrologue-Win64-Shipping.exe"
```
Then relaunch via Steam, inject, and `uevr_vr_status` should report the headset.
Dumper mode intentionally disables VR, so nothing will render in the headset until this is done.

---

## 9. Caveats

- **Dumper mode is on.** VR hooks are skipped by design; `hmdActive: false` is expected.
- The menu pawn is not the gameplay pawn. Weapon/camera inspection must happen inside a mission.
- `BlueprintImplementableEvent` functions have no C++ body — reflection shows the signature only.
- The game is **UE 4.27**, not UE5. Do not import UE5-era UEVR profiles from the Hub without
  checking; the executable name also differs from the non-Prologue `SWATCommander-Win64-Shipping.exe`.
- The MCP plugin can write properties, spawn objects, run Lua and hook functions. Keep the
  session read-only until the profile is understood.
