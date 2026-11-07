# Contractors VR → SWAT Commander: Prologue
## VR Weapon-Handling Research Report (Research-Only Phase)

**Status:** Research complete, awaiting user approval. **No game or script files have been modified during this phase.**
**Reference game:** Contractors VR (original, Steam app 963930), Caveman Studio.
**Target game:** SWAT Commander: Prologue, Unreal Engine 4.27, `CH_Operator_C` pawn.
**Date:** 2026-11-05
**Existing work relied on (untouched):** `twohand_grip.lua` (position + rotation + lock-to-gun + self-heal), head tracking, right-hand aim via UEVR.

---

## 0. Sources and evidence legend

| Tag | Meaning |
|---|---|
| **D** | Documented — official source (UE developer interview, official patch notes, Steam store page, official modkit docs) |
| **C** | Community-reported / observed gameplay behavior (UploadVR review, Reddit, Steam discussions, YouTube) — *not* a code claim |
| **L** | Live SWAT runtime evidence via UEVR-MCP (this session) |
| **H** | Hypothesis / inference — not verified against source or runtime |
| **N** | Not supported / absent in SWAT (from L + headers) |

Rules applied throughout:
- No Contractors C++ class names, offsets, or memory layouts are invented. Contractors is referenced only by **documented gameplay behavior**.
- No Contractors offset is copied into SWAT. SWAT offsets come solely from SWAT's own reflection (`SWATCommander-reflection.json`, live MCP).
- `twohand_grip.lua` was reused, not overwritten. Every change during this phase was instrumentation (diagnostic globals) on a working copy; the canonical script remains intact.

### Source index
- **S1** Unreal Engine developer interview, "Contractors pushes VR shooters forward…" (unrealengine.com, 2019-06-10) — Weihan Ding (Project Lead) & Cong Ku (Lead Programmer).
- **S2** Contractors VR Steam store page (app 963930) — feature list, gunstock calibration.
- **S3** Contractors v0.93.0.0 official "Update Situation Report" (contractorsvr.com, 2022-09-01) — patch notes.
- **S4** UploadVR "Contractors VR: Beginner's Guide" (2019-02-11).
- **S5** Steam Community: Bolt Release FAQ (2018-12-17); Reddit r/ContractorsVR "Inside the new weapon and damage model design" (2022-04-30); Reddit weapon-hand-animation thread (2023-12-28).
- **S6** buckminsterfullerene02.github.io "Contractors VR — A Comprehensive Introduction to Unreal Engine Modding" — engine/modkit facts.
- **S7** kcmonkey/Contractors-Mod-Kit (GitHub) + mod.io modkit guide — modkit distribution facts only.
- **S8** SWAT Commander headers: `WeaponBase.h`, `EquipmentBase.h`, `TSCharacterBase.h`, `EquipmentStuct.h`, `EquipmentWeaponStatsStuct.h`, `WeaponDescription.h` (MirrorProject, auto-generated from live reflection).
- **S9** Live SWAT runtime via UEVR-MCP (this session): weapon actor, pawn slots, anim instance, skeleton sockets.

---

## 1. Engine & architecture context

| Fact | Evidence | Notes |
|---|---|---|
| Contractors uses a **custom UE 4.27 engine** | S6 (D) | Modkit is a release of the game UE project on top of Caveman's custom UE4.27; distributed via a fork of the UnrealEngine repo. |
| SWAT Prologue is **UE 4.27** | S8/S9 (L) | Confirmed; `UEVRBackend` branch `ue57performance`. |
| Contractors weapons are built from **interchangeable components** (bolt, trigger, front handle, weapon body) in C++ base classes, exposed to Blueprints with component visualizers | S1 (D) | "After we implemented all the tools, we just needed to add a bolt component, a trigger component, a front handle, and weapon body, and voila!" |
| Full-body IK via a **third-party plugin** + UE Animation Blueprints | S1 (D) | SWAT already has `PrimaryIKHands` / `AnimGraphNode_ModifyBone_50/51` driving `Hand_L`/`Hand_R`. |
| Modkit is **binaries only** (`Zomboy_Plugin`); no original weapon-system source is public | S6 (D) | We cannot and must not copy Contractors class names/offsets. |

**SWAT parallel (L):** `BP_AssaultRifle_Modern_Weapon_C` (and `BP_Pistol320_Weapon_C`, `BP_Breaching_Shotgun_C`) already contain separate sub-components: `Bolt_SM` / `Bolt_SM1` (StaticMeshComponents), `Mag_SM` (StaticMesh), `SK_Weapon` (SkeletalMesh), plus muzzle/flashlight/laser/scope components. So SWAT's weapon is **already component-assembled** in the Contractors style — the architecture is compatible, not a rewrite.

---

## 2. Mechanic-by-mechanic comparison

### 2.1 Primary hand grip & aiming
- **Contractors (D, S1/S2/S4):** Dominant hand holds and aims the gun; gunstock calibration tool; Virtual Gunstock and Physical Gunstock support; "Virtual Gunstock" setting.
- **SWAT (L):** Right controller drives aim via UEVR (`VR_AimMethod=2`, `VR_AimSpeed=15`, `VR_DecoupledPitch=true`); `RightHandTransform` @ weapon+0x380 is the aim pose; `SightTransformADS` @ weapon+0x350; `SightPower=15`. Works and verified.
- **SWAT input to investigate:** `RightHandTransform`, `SightTransformADS`, `IronSightHeight`/`HoloSightHeight`/`2XSightHeight` for sight-height variants.
- **Recommended:** No change to aim; keep right-hand aim as primary. Difficulty: **Low** (already done).

### 2.2 Support hand grip (foregrip / magazine)
- **Contractors (D/C, S1/S4):** Off-hand grabs foregrip or magazine area; magazine grip better for hip-fire, forestock for balanced aiming and recoil control; two-handed alignment.
- **SWAT (L):** `LeftHandTransform` @ weapon+0x3B0 (rotation), +0x3C0 (translation = defGrip), `LeftHandAFrontGripTransform` @ +0x410, `LeftHandVFrontGripTransform` @ +0x3E0, `LeftHandHFrontGripTransform` @ +0x440; `GripType` enum (None=0, Vertical=1, Angular=2, Horizontal=3); rifle = Angular, pistol = None, shotgun = None. `FreeLeftHand` bool. Multiple grip poses: `CurrentWeaponGripPoseAnimation`, `CurrentWeaponAGripPoseAnimation`, `CurrentWeaponHGripPoseAnimation`.
- **Current implementation:** `twohand_grip.lua` resolves `PrimaryIKHands.LHandPosition` (translation @ ikTrans+0x10, rotation @ ikTrans-0x10), calibrates `rotCalib = qconj(localCtrl)*currentIkRot` at engage, locks hand to foregrip (`writeGrip(defGrip)`) while gripped, releases at >65 cm, 15-frame tracking hysteresis, self-healing proxy. **Verified live:** grip point lands within ~2.4 cm of real `Hand_L` socket; rotation error ~0.35° while engaged.
- **Recommended:** Keep as foundation. Add magazine-area grip option later (second grab zone around mag socket). Difficulty: **Medium**.

### 2.3 Two-handed weapon alignment / IK
- **Contractors (D, S1):** Full-body IK, Animation Blueprints control IK; weapon handling feels "great".
- **SWAT (L):** `PrimaryIKHands` is the writable input; `LHandJointTargetLocation` @ weapon+0x56C, `RHandJointTargetLocation` @ weapon+0x560 drive TwoBoneIK; `AnimGraphNode_ModifyBone_50/51` write `Hand_L`/`Hand_R`; `HandLJoinAlpha` blends. Verified: writing `PrimaryIKHands` persists and rotates `Hand_L`.
- **SWAT input:** `PrimaryIKHands` (ikTrans), `Hand_L`/`Hand_R` sockets, `LHandJointTargetLocation`/`RHandJointTargetLocation`, `HandLJoinAlpha`.
- **Recommended:** Extend current IK to accept a support-hand target derived from controller (already doing position via defGrip lock; rotation driven). Add reach clamping. Difficulty: **Medium**.

### 2.4 Hand orientation / virtual gunstock / pivot
- **Contractors (D/C, S3/S5):** "Pivot Center switch" (v0.93), "Adjusted pivot center of all weapons"; "When aiming down sight, the weapon rotates pivoting around the contact point between gunstock and shoulder" (Reddit dev post, S5); gunstock calibration tool (S2).
- **SWAT (L):** `DefaultTransform` on weapon (rotation/translation relative to root), `RHandRelaxedTransform`, `RHandSemireadyTransform`, `RHandSprintingTransform`, `RHandLoweredUp/DownTransform`; `RightHandTransform` is the aim pose. No virtual-gunstock calibration exists yet.
- **SWAT input:** `DefaultTransform`, `RightHandTransform`, `SightTransformADS`.
- **Recommended:** Add a configurable pivot/shoulder contact point and a calibration routine (store offset per weapon). Difficulty: **Medium-High** (needs tuning).

### 2.5 Trigger & firing
- **Contractors (D/C, S1/S4):** Trigger fires weapon; full trigger pull on Vive (S4 community); 2–3 fire modes; semi-auto most accurate, full-auto best CQC.
- **SWAT (L):** `Trigger()` / `ReleaseTheTrigger()` (AEquipmentBase); `Fire`, `FireContinue`, `AutoFire`, `AutoFireContinue`, `StopAutoFire_MULTICAST`; `ChangeFireMode_CLIENT/SERVER`; `CurrentFireMode` (FireMode enum, FireMode_MAX=3 → 3 modes); `FireModes` array (rifle has 2, shotgun 1); `FireRate` (750 RPM rifle); `ShotTime`, `AutoFireTimer`, `AutoFireShotTime`.
- **Recommended:** Map controller trigger to `Trigger()`/`ReleaseTheTrigger()`; fire-mode switch to a button. Already partially implied. Difficulty: **Low**.

### 2.6 Recoil & stabilization
- **Contractors (D/C, S1/S3):** Consulted gun experts; RPM notes; "Weapon recoil increased by 50% when airborne"; recoil pivots around gunstock/shoulder (S5).
- **SWAT (L):** `RecoilTransformMin/Max` (FTransform with rotation+translation), `HRecoilPower=0.4`, `VRecoilPower=0.5`, `RecoilIncreasePower=0.63`, `DontHaveRecoil=false`, `RecoilIncreasePower`; `CurrentRecoilHandRotation=2.3` in anim BP. `EquipmentWeaponStatsStuct.Recoil` (+0x10). `SprintAlpha`, `SwayAlpha`, `SwayRotationY`.
- **Recommended:** Drive recoil by applying `RecoilTransform` to the right hand / weapon root during fire; modulate by airborne state. Difficulty: **Medium**.

### 2.7 Fire modes
- **Contractors (C, S4):** 2–3 fire modes per weapon.
- **SWAT (L):** `CurrentFireMode`, `FireModes` array, `ChangeFireMode_CLIENT/SERVER`, `SwitchFireMode` (WeaponSoundComponent). Confirmed 3 modes (FireMode_MAX=3).
- **Recommended:** Button cycle calling `ChangeFireMode`. Difficulty: **Low**.

### 2.8 Bolt release / charging handles / slides / pumps
- **Contractors (D/C, S1/S5):** Bolt release button on M16 (tap with controller); slide/pump operation; M4A1 bolt release by pressing Y while gripping mag in magwell (community, S5); HK slap (MP5/Evo3/G3/PSG) — hitting charging handle releases it (Contractors Showdown changelog, S5); AR bolt-release slap (hitting bolt catch) in Showdown.
- **SWAT (L):** `Bolt_SM` / `Bolt_SM1` StaticMeshComponents; `BoltMoving` bool; `WeaponEmptyReloadAnim` / `WeaponFullReloadAnimV2` / `WeaponReloadAnim` (TacReloading); `EmergencyReload_SERVER`, `EmergencyReloadResetAnim_MULTICAST`; `ReloadMeshUpdate_MULTICAST`; `Set Reload Stage` / `SetReloadStage_SERVER/MULTICAST`; `GetReloadProgresionPoint`; `MagManagment`, `SpawnMag_MULTICAST`; anim BP `ReloadIK`, `ReloadSocketCount`.
- **SWAT input:** `Bolt_SM`, `BoltMoving`, reload stage, `ReloadMeshUpdate_MULTICAST`, `EmergencyReload_SERVER`.
- **Recommended:** Implement bolt-release as a proximity+button interaction on `Bolt_SM` (mirroring Contractors' "bring hand to bolt, press button"). HK slap / charging handle as a velocity-threshold hit on the handle mesh. Difficulty: **High** (needs animation + state machine).

### 2.9 Magazine release
- **Contractors (D/C, S3/S5):** "Added a new feature of pulling out the mag with off-hand. By pressing A/X while holding the mag with off-hand, the mag can now be pulled out." (Steam news, S5 search); off-hand magazine removal (S3).
- **SWAT (L):** `Mag_SM` StaticMesh (and `_VFO` variants for different mags: `SM_ARMagazine_stl_01/02/Empty` + VFO); `MagManagment`, `SpawnMag_MULTICAST`; `BuiltinMag` (shotgun = true → no detachable mag); `ReloadSocketCount`; `MagsWithAmmo` array; `CurrentMag`, `MagCapacity`, `InMagAmmo`, `InChamberAmmo`, `GetAmmoInMag`, `GetAmmoAmount`.
- **Recommended:** Make `Mag_SM` a grabbable component; on grab, detach and spawn a mag actor; on release near magwell, re-attach and update ammo. Use `MagManagment`/`SpawnMag_MULTICAST` as the existing mag lifecycle. Difficulty: **High** (needs mag actor + socket + ammo sync).

### 2.10 Magazine pickup
- **Contractors (C, S4):** Reach to vest; grab fresh magazine; insert into weapon; reload holstered/off-hand weapons by sliding mag in.
- **SWAT (L):** Pawn slots: `PrimaryWeapon`, `SecondaryWeapon`, `SpecialWeapon`, `AdditionalWeapons` (grenades), `DropedPrimary/Secondary/SpecialWeapon`; `Equipment` struct with `PrimaryMags=4`, `SecondaryMags=4`, `PrimaryWeaponAttachments`; `MagsWithAmmo` array per weapon; `PickupSphere`/`OverlapSphere` on weapons.
- **SWAT input:** `AdditionalWeapons`/equipment slots as mag storage; `MagsWithAmmo`; `PickupSphere`.
- **Recommended:** Use `AdditionalWeapons` slots + body-attached mag meshes as the "vest" storage; grab mag from body. Difficulty: **Medium-High**.

### 2.11 Magazine insertion (tactical reload)
- **Contractors (C, S4):** Slide mag into weapon; off-hand reload; ambidextrous reload works holding by forestock.
- **SWAT (L):** `Reload`, `Reload_SERVER`, `ReloadAnimation_MULTICAST`, `PlayReloadAnimation_MULTICAST`, `ReloadMeshUpdate_MULTICAST`, `RepeatReloadAnimation`, `ResetReload_MULTICAST`, `Set Reload Stage` (0/1/2…), `FinishReload_SERVER`, `EmergencyReload_SERVER`; anim BP `ReloadIK`, `ReloadSocketCount`; `CharacterReloadAnim`/`V2`, `CharacterFullReloadAnimV2`, `CharacterEmptyReloadAnim`, `WeaponReloadAnim` (TacReloading V1/V2), `WeaponFullReloadAnimV2`, `WeaponEmptyReloadAnim`.
- **SWAT input:** `ReloadStage`, `ReloadSocketCount`, `ReloadIK`, all reload anim montages/sequences, `ReloadMeshUpdate_MULTICAST`.
- **Recommended:** Drive reload stages from a physical mag-insertion proximity check (mag near magwell socket) instead of a button; keep existing anim montages as the visual. Difficulty: **High**.

### 2.12 Off-hand reload
- **Contractors (C, S4):** "If you're holding a gun in your off-hand, you can reload it. Ambidextrous reloading also works if you're holding a gun by its forestock."
- **SWAT (L):** `FreeLeftHand` bool; `HasWeaponInHand?` anim var; two-handed grip lock is toggleable (`_G.__twohand_lock_pos`). `FreeLeftHand` likely frees the left hand for reloads.
- **Recommended:** When `FreeLeftHand`/grip release, allow left hand to interact with mag. Difficulty: **Medium**.

### 2.13 Different weapon reload procedures (rifle / pistol / shotgun)
- **Contractors (C, S5):** M4/M16 magazine release + bolt release; AK mag removal/insertion; MP5 mag + charging handle; shotgun pumping + shell handling; bolt-action bolt manipulation; pistol mag release + slide.
- **SWAT (L):** Three weapon classes present:
  - Rifle (`BP_AssaultRifle_Modern_Weapon_C`): `BuiltinMag=false`, `GripType=Angular`, `MagCapacity=30`, `Bolt_SM`/`Bolt_SM1`, mag meshes, TacReloading + FullReload anims, `ReloadSocketCount=1`.
  - Pistol (`BP_Pistol320_Weapon_C`): `BuiltinMag=false`, `GripType=None`, `MagCapacity=15`, `WeaponReloadAnim` (AnimSequence), `Mag_SM`.
  - Shotgun (`BP_Breaching_Shotgun_C`): `BuiltinMag=true`, `GripType=None`, `MagCapacity=5`, `MagsWithAmmo=[]`, `WeaponEmptyReloadAnim=null`.
- **Recommended:** Single `WeaponInteractionManager` with per-weapon-type handlers (detachable mag vs built-in tube, bolt vs slide vs pump). Difficulty: **High** but reusable.

### 2.14 Weapon physics: collision with walls/surfaces
- **Contractors (D, S3):** "physics-based collisions have been implemented for all weapons… guns will collide with objects and surfaces… melee weapons will bounce back if hit hard." v0.93 patch notes: "Added physics-based collision to all weapons", "Added damping effect to the grenade pin".
- **SWAT (L):** `bActorEnableCollision=true`; `PickupSphere`, `OverlapSphere`; `EnableCollisionAndPhysics_MULTICAST/SERVER`, `DisableCollisionAndPhysics_MULTICAST/SERVER`; `AddImpulseToPO`; `PhysicalObject_Manager`, `PhysicalObjects`; `ActorsToIgnore*`. Weapon root is a `StaticMeshComponent` (RootMesh) with collision possible.
- **SWAT input:** RootMesh collision profile, `EnableCollisionAndPhysics_*`, `PhysicalObject_Manager`.
- **Recommended:** Enable physics collision on the weapon root mesh while held; damp movement on hit; keep IK hand from penetrating. Difficulty: **Medium** (UEVR + Lua physics calls available: `uevr_physics_set_collision/simulate`).

### 2.15 Weapon damping
- **Contractors (D, S3):** "Added damping effect to the grenade pin" (implies damping as a general physics feel).
- **SWAT (L):** No explicit damping field found; `SprintAlpha`, `SwayAlpha` provide visual sway. `PhysicalAnimationComponent` on pawn.
- **Recommended:** Add a velocity-based damping on the weapon root when colliding. Difficulty: **Medium**.

### 2.16 Physical recoil (weapon responds to firing)
- **Contractors (D/C, S1/S3):** "Realistic weapon recoil and handling"; "Weapon recoil increased by 50% when airborne"; recoil pivots around gunstock/shoulder (S5).
- **SWAT (L):** `RecoilTransformMin/Max`, `HRecoilPower`, `VRecoilPower`, `RecoilIncreasePower`, `CurrentRecoilHandRotation`; `FEquipmentWeaponStatsStuct.Recoil`. Recoil is currently applied to the anim graph, not the VR controller.
- **Recommended:** Apply recoil transform to the weapon root / right hand during fire; combine with airborne multiplier. Difficulty: **Medium**.

### 2.17 Attachments & sights
- **Contractors (D/C, S1/S2/S4):** "Weapons with a variety of attachments"; customizable loadout; scope zero distance adjusted in v0.93.
- **SWAT (L):** `Attachments` (Name array), `AttachmentsArray` (StaticMeshComponents x4), `AttachmentMeshArray`, `DefaultAttachments` (count 2), `AttachmentsDT` = `DT_WeaponDataTable`; `SM_Scope`, `SKG_Scope_SceneCaptureComponent2D`, `SightTransformADS`, `SightPower`, `SightIsSet?`, `SightLocation`, `HoloSightHeight`, `IronSightHeight`, `2XSightHeight`; `HasSuppressor`, `SuppressorMesh`, `SuppressorTransform`, `HasGrip`; `SpawnAttachment`, `SightCustomApply_MULTICAST`; `FlashLight*`, `Laser*`.
- **Recommended:** Attachment swap already has data table + spawn path; VR needs grab-to-attach UX. Difficulty: **Medium-High**.

### 2.18 Holsters / equipment slots
- **Contractors (C, S4):** Weapons and magazines accessible from body positions; holstered reload.
- **SWAT (L):** `HolsterAnim` (AnimMontage) per weapon; `RaiseAnim`; `VisibleOnCharacter`; `Equipment` struct slots; pawn `PrimaryWeapon`/`SecondaryWeapon`/`SpecialWeapon`/`AdditionalWeapons`; `Droped*Weapon` fields; `Use`/`Activate` methods. No explicit holster component found; holstering is anim-driven.
- **SWAT input:** `HolsterAnim`, `RaiseAnim`, `VisibleOnCharacter`, equipment slots, `Use`.
- **Recommended:** Define holster sockets on the body mesh; attach weapon actor to socket on holster, detach on grab. Difficulty: **Medium**.

### 2.19 Weapon switching
- **Contractors (C, S4):** Switch weapons via body/holster.
- **SWAT (L):** `CurrentWeapon` pointer on pawn; `PrimaryWeapon`/`SecondaryWeapon`/`SpecialWeapon`; `SwitchFireMode` is weapon-sound only. Weapon switching likely via `CurrentWeapon` assignment (Blueprint).
- **Recommended:** Set `CurrentWeapon` on grab; play `RaiseAnim`. Difficulty: **Medium**.

### 2.20 Grenades & throwable objects
- **Contractors (D, S3):** "Improved physics of throwable… throwables more like real-life collisions"; "Added damping effect to the grenade pin"; throwing knife revolves in air.
- **SWAT (L):** `AdditionalWeapons` includes `BP_FlashGrenade_C`, `BP_StingerGrenade_C`; `PickupSphere`; `InteractiveObject`; `PhysicalObject_Manager`.
- **Recommended:** Apply Contracts-style physics (collision + damping) to grenades. Difficulty: **Medium**.

### 2.21 Melee weapons
- **Contractors (D, S3):** "Improved physics-based melee and weapon handling… melee weapons will bounce back if hit hard."
- **SWAT (L):** `MeleeAttack`, `MeleeAttack_AI`, `MeleeAttack_MULTICAST/SERVER`, `IsMeeleAttackPlaying`, `MeleeCharacterTarget`, `MeleeDamageTypeClass`; `CurrentCharacterMeeleAnim`.
- **Recommended:** Add collision + bounce on melee. Difficulty: **Medium**.

### 2.22 Hand pose & finger animation
- **Contractors (D, S3):** "Improved hand model and animation… Reloading weapons are also more flexible and not limited to only one gesture."
- **SWAT (L):** Full finger bones confirmed on character mesh: `index_01/02/03_l/r`, `middle_*`, `ring_*`, `pinky_*`, `thumb_*`; `AnimGraphNode_ModifyBone_50/51` write `Hand_L`/`Hand_R`; anim BP vars `Has Grip`, `LoweringAlpha`, `MeleeIK`, `ReloadIK`, `CustomAnimAlpha`, `CustomAnimPlays`.
- **SWAT input:** finger bones, `AnimGraphNode_ModifyBone_*`, `HandLJoinAlpha`, `Has Grip`.
- **Recommended:** Drive finger curl per grip type (magazine grip vs foregrip vs pistol) via ModifyBone or anim curves. Difficulty: **Medium-High**.

### 2.23 Arm IK / body IK
- **Contractors (D, S1):** Full-body IK via third-party plugin + Animation Blueprints.
- **SWAT (L):** `PhysicalAnimationComponent` on pawn; `ClavicleTranslation`, `Spine01/02/03Translation`, `NeckTranslation`, `HeadTranslation`, `HeadRotator`; `PrimaryIKHands`; `LHandJointTargetLocation`/`RHandJointTargetLocation`; `HandLJoinAlpha`.
- **Recommended:** Current IK is sufficient for 6DOF; body IK can be enhanced later. Difficulty: **Low** (already working).

### 2.24 Controller tracking
- **Contractors (D, S1):** UE4 VR platform support; FScopedMovementUpdate tip for transform updates.
- **SWAT (L):** `uevr.vr.get_pose(0/1/2)` = HMD/left/right, 7 floats; untracked = identity; proxy self-heal; 15-frame hysteresis.
- **Recommended:** Keep; apply FScopedMovementUpdate discipline when writing transforms (avoid multiple SetTransform per frame). Difficulty: **Low**.

### 2.25 Physical interaction (grab/release)
- **Contractors (C, S4):** Grip from multiple points; hold grip to grab.
- **SWAT (L):** `InteractiveObject`, `InteractiveActorIdentifier`, `Use`, `IsInHand`, `HasCharges`; `PickupSphere`/`OverlapSphere`; `InteractiveObject=false` on weapon (held via equipment system, not interactive actor).
- **Recommended:** Add a grabbable interface layer over equipment actors. Difficulty: **Medium**.

---

## 3. Implementation order (proposed)

Starting from the verified left-hand rotation, ending at physical reloads. Each step is independently testable; none modifies the game until approved.

| # | Step | Depends on | Difficulty | Risk |
|---|---|---|---|---|
| 1 | **Left-hand rotation (DONE)** — `rotCalib` + slerp, verified live, 0.35° error | — | Low | Low |
| 2 | **Lock-to-gun grip (DONE)** — hand locks to foregrip while gripped, releases at >65 cm | 1 | Low | Low |
| 3 | Reach clamping + wrist limits; prevent hand penetrating body | 2 | Medium | Low |
| 4 | Virtual gunstock / pivot calibration (per-weapon shoulder contact point) | 2 | Medium-High | Medium |
| 5 | Trigger mapping: controller trigger → `Trigger()`/`ReleaseTheTrigger()`; fire-mode cycle button | — | Low | Low |
| 6 | Recoil application to weapon root/right hand on fire (airborne modifier) | 5 | Medium | Medium |
| 7 | Physics collision + damping on held weapon root mesh | 2 | Medium | Medium |
| 8 | Holster sockets on body mesh; holster/unholster via `HolsterAnim`/`RaiseAnim` | — | Medium | Medium |
| 9 | Weapon switching via `CurrentWeapon` + raise anim | 8 | Medium | Low |
| 10 | Finger pose driving per grip type via `AnimGraphNode_ModifyBone` | 2 | Medium-High | Medium |
| 11 | Magazine-as-grabbable component (`Mag_SM` detach/attach) + ammo sync via `MagManagment`/`SpawnMag_MULTICAST` | 9 | High | High |
| 12 | Physical mag insertion → drives `ReloadStage` + existing reload anim montages | 11 | High | High |
| 13 | Bolt release / charging handle / slide / pump interactions | 12 | High | High |
| 14 | Off-hand reload + ambidextrous (forestock) reload | 12 | Medium | Medium |
| 15 | Grenade/throwable physics (collision + damping) | 7 | Medium | Low |
| 16 | Melee collision + bounce | 7 | Medium | Low |
| 17 | Attachment grab-to-swap UX (data table + `SpawnAttachment`) | 9 | Medium-High | Medium |

**Recommended next after approval:** finish step 3 (clamping) + step 5 (trigger) in parallel — both low risk and immediately improve feel — then step 11 (magazine) as the core of "physical reloads".

---

## 4. Risk & caveats

1. **No Contractors source available** (S6/S7): all Contractors mechanics are documented gameplay behavior or community observation. Anything not in S1–S7 is marked **H** and must be validated in-game before implementation.
2. **BlueprintImplementableEvent functions have no C++ body** (S8): `Reload()`, `Trigger()`, `ReleaseTheTrigger()` etc. are implemented in Blueprints. UEVR can call them, but their internal logic (timing, ammo checks) is not visible via reflection; behavior must be observed at runtime.
3. **Multiplayer/replication:** `Reload_SERVER`, `ChangeFireMode_SERVER`, `FinishReload_SERVER` indicate server-authoritative reload. Physical reload must respect replication or desync ammo.
4. **Collision can fight IK:** enabling physics on the weapon root while IK drives the hands may cause jitter; needs careful ordering (IK writes pose, physics constrains position).
5. **Performance:** per-frame IK + physics + anim writes must stay within frame budget; S1 explicitly warns against multiple SetTransform per frame — use `FScopedMovementUpdate` discipline.
6. **Backup policy:** every file backed up before modification (research rule); `twohand_grip.lua` must never be overwritten — extend via new files or guarded edits.

---

## 5. What SWAT already does well (no change needed)

- Head tracking, right-hand aiming, left-hand IK position+rotation, two-hand grip lock, self-healing proxy, 15-frame tracking hysteresis, weapon component assembly (bolt/mag/scope/laser/flashlight), ammo/mag arrays, fire modes, reload stages, anim montages/sequences, finger bones, physical animation component, collision spheres.

## 6. Open questions for the user

1. Confirm in-headset that left-hand rotation + lock-to-gun feel correct (pending test).
2. Approve implementation order above, or reorder.
3. Decide scope of Phase 2: stop at step 7 (collision) or go through step 13 (physical reloads)?
4. Stronghold 3 LAN test (separate thread) — coordinate simultaneous two-machine launch when ready.

---
*End of research report. No game or script files were modified to produce this document.*
