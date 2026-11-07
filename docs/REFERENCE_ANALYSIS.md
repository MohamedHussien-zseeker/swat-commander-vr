# Reference Analysis — VR Grip & Reload Patterns

**Purpose:** Document reusable design patterns from studied open-source references.
**Status:** Read-only analysis. No code copied into SWAT. All references kept under `references/`.
**Date:** 2026-11-06

## 1. VRExpansionPlugin (mordentral) — UE4/UE5, MIT

Source: `references/VRExpansionPlugin/` (shallow clone, MIT license, copyright Joshua Statzer).

### 1.1 What it is
A UE4/UE5 plugin providing VR motion controllers, gripping, locomotion, and multiplayer replication. It is a *framework for building VR games*, not a modding layer. It cannot be dropped into SWAT's UEVR mod directly (different layer: UEVR modding vs. native UE VR plugin). Its value is **design pattern reference**.

### 1.2 Relevant patterns

**A. Secondary grip / two-handed alignment (`GS_GunTools.h`, `FGunTools_AdvSecondarySettings`)**
- Two-hand modifier applied to the primary grip transform using a secondary grip point.
- Advanced settings:
  - `SecondaryGripScaler` (0..1) + `SecondarySmoothing` (Euro low-pass filter) for frame-by-frame lerp of the secondary influence.
  - `bUseSecondaryGripDistanceInfluence`: influence scales off distance from grip point, with a `GripInfluenceDeadZone` (100% influence within) and `GripInfluenceDistanceToZero` (influence fades to 0 over this range beyond the dead zone).
  - `bUseConstantGripScaler` vs one-shot `StartLerp` state.
- **Mapping to SWAT:** Our v2 script currently snaps the hand to the foregrip (hard lock). A better feel (Contractors-style) would lerp the secondary hand influence based on distance from the grip point, instead of a binary engage. This is a candidate improvement for milestone 2/3. The dead-zone + distance-to-zero model is directly portable to our Lua math.

**B. Virtual stock (`FBPVirtualStockSettings`, `GS_GunTools`)**
- Shoulder-pivot / virtual gunstock: snap to stock when the HMD/secondary hand is within `StockSnapDistance`, with a lerp threshold (`StockSnapLerpThreshold`) blending from standard hold to stock hold.
- `bAdjustZOfStockToPrimaryHand`, `StockSnapOffset` (neck/mount pivot offset), optional smoothing (`bSmoothStockHand`, `SmoothingValueForStock`, `StockHandSmoothing`).
- `bDebugDrawVirtualStock` for tuning.
- **Mapping to SWAT:** This is exactly milestone 4 (virtual gunstock / pivot calibration). We can replicate the distance-snap + lerp + offset model in Lua using the HMD pose (`uevr.vr.get_pose(0)`) as the stock reference, plus a configurable `StockSnapOffset`. Not yet implemented.

**C. Recoil (`GS_GunTools`)**
- `AddRecoilInstance(RecoilAddition, Optional_Location)` adds a recoil transform; `MaxRecoilTranslation/Rotation/Scale`, `DecayRate`, `LerpRate`; `BackEndRecoilStorage`/`BackEndRecoilTarget`; `bApplyRecoilAsPhysicalForce` (world-space positional) vs logical (relative-space full transform).
- **Mapping to SWAT:** Our v2 script has a simple 8-frame pitch kick gated by `__twohand_recoil`. VRExpansionPlugin's decay+lerp model is a better reference for milestone 6 (recoil application). Port the decay/lerp concept rather than the instant kick.

**D. Grip slots / attachment points**
- `VRGripInterface` + `FBPActorGripInformation` + `OnSecondaryGrip` delegate. Objects expose grip points; controllers query them.
- **Mapping to SWAT:** SWAT's `LeftHandTransform`/`LeftHand*FrontGripTransform` already serve as grip points. The concept of "grip slots" maps to the multiple grip transforms (vertical/angular/horizontal) and `GripType` enum. No new infrastructure needed; just use the existing transforms as slots.

**E. Multiplayer VR replication**
- Replicated grip info, secondary grip net quantization, client-auth grip conflict resolution.
- **Mapping to SWAT:** SWAT has server-authoritative reload (`Reload_SERVER`, `FinishReload_SERVER`). If we ever add networked VR grip, this is the reference. Out of scope for now (single-player Prologue).

### 1.3 What NOT to reuse
- The plugin's C++ grip components (`UGripMotionControllerComponent`, `UGrippable*Component`) require building a UE project with the plugin. SWAT is a flatscreen game modded via UEVR; we cannot inject a native UE plugin into the shipped game. Only the *math/design* transfers.
- Engine version: VRExpansionPlugin targets UE4.23–UE5.x; SWAT is UE4.27. Concepts transfer; code does not.

---

## 2. TPS Shooter System (Helmssyss) — UE4.27, MIT

Source: `references/TPS-Shooter-System/` (shallow clone, MIT license, copyright 2023 Helmsys).

### 2.1 What it is
A beginner UE4.27 TPS with C++ + Blueprints. Weapon reload is animation-notify driven with a spawned magazine actor that is visually held in the left hand, then detached/destroyed, with ammo refilled at release.

### 2.2 Reload state machine (documented)

Anim notify sequence:
1. **RifleReloadNotify** — at reload start: hide main weapon mesh, show hidden (fake) mesh, spawn a magazine actor (`WeaponMagazine` class) attached to `leftHandSocket`, set it to empty mag mesh, disable physics/collision.
2. **GetNewMagNotify** — mid-reload: spawn a fresh magazine actor attached to `leftHandSocket` (full mag mesh).
3. **ReleaseMagNotify** — on insertion: detach/destroy the held magazine actor, restore main mesh (visible) / hidden mesh (hidden), call `GunReload()` (ammo refill: `atilanMermi += min(deficit, maxMermi); maxMermi -= added`).
4. **ThrowMagNotify** — optional: detach held mag, enable physics, add angular impulse, set lifespan (throw away).

Supporting: `WeaponHideMag`/`WeaponUnHideMag` hide/unhide the magazine bone (`b_gun_mag`) on the skeletal mesh.

### 2.3 Key insight for SWAT
SWAT does **not** need the mesh-swap trick — SWAT already has a real `Mag_SM` StaticMesh component and `MagsWithAmmo`/`MagManagment`/`SpawnMag_MULTICAST`. But the **state-machine pattern** (notify → spawn mag in hand → attach → detach/destroy → refill ammo) is a useful template for how to connect a visual magazine to ammo state. In a VR version, the "notify" becomes a **physical proximity check** (mag near magwell) rather than an animation event.

### 2.4 What NOT to reuse
- The mesh-hide approach (`weaponMesh->SetHiddenInGame`) is an animation hack; SWAT's real mag component is better.
- Ammo model is simple (integer counters); SWAT's `MagsWithAmmo` array + `CurrentMag` is richer.
- No VR, no controller input, no IK. The reload is fully animation-driven.

---

## 3. Mapping references → SWAT milestones

| SWAT milestone | Best reference | Pattern to borrow |
|---|---|---|
| 2 (grip) | VRExpansionPlugin | Secondary grip influence lerp (dead zone + distance-to-zero) instead of hard snap |
| 3 (clamping) | VRExpansionPlugin | Distance-based influence already covers clamping conceptually |
| 4 (gunstock/pivot) | VRExpansionPlugin | Virtual stock: snap distance + lerp threshold + offset + smoothing |
| 6 (recoil) | VRExpansionPlugin | Decay + lerp recoil (AddRecoilInstance model) |
| 10 (finger poses) | UnrealBodyPlugin (not yet fetched) | Interaction-aware hand poses |
| 11 (mag grabbable) | TPS Shooter System + L4D2VR (behavioral) | Spawn mag actor in hand, attach, detach on release |
| 12 (mag insertion) | TPS Shooter System | Notify→proximity: physical mag near magwell drives `ReloadStage` + `ReloadMeshUpdate_MULTICAST` |
| 13 (bolt/chamber) | L4D2VR (behavioral) | Velocity-threshold hit on bolt handle |
| 14 (off-hand reload) | VRExpansionPlugin | Secondary grip release frees hand for interaction |

## 4. What remains unaddressed by references
- **Gunstock calibration** (per-weapon shoulder contact point, configurable offset) — no verified permissively-licensed UE4.27 repo provides this end-to-end. VRExpansionPlugin's virtual stock is the closest; we'd adapt its math.
- **Physical magazine as a grabbable actor in UEVR** — L4D2VR is Source-engine; TPS uses animation-spawned actors. Neither maps directly to UEVR's Lua/UObjectHook layer. We'll need to design this ourselves using UEVR's component attachment APIs.
- **Bolt/slide/chamber interaction** — L4D2VR is the only detailed reference; behavioral only.

## 5. License summary
- VRExpansionPlugin: MIT (Joshua Statzer) — safe to study and adapt patterns.
- TPS Shooter System: MIT (Helmsys, 2023) — safe to study and adapt patterns.
- L4D2VR: license not verified — behavioral reference only, no code copying.
- UnrealBodyPlugin: MIT but unmaintained.
- RTIK: MIT.
- FPS Shooter System: license unverified.
- PistolWhip-UE4: license unverified.

## 6. Next steps
- Do not merge any reference code into SWAT. Keep references read-only.
- When reaching milestone 4, adapt VRExpansionPlugin's virtual stock math (snap distance + lerp + offset + smoothing) into Lua.
- When reaching milestone 11–12, adapt TPS's spawn-attach-detach mag state machine into a physical proximity-driven version using SWAT's `Mag_SM`/`MagManagment`/`SpawnMag_MULTICAST`.
- v2 hand script is installed but untested — game launch + verification is still the immediate next step.
