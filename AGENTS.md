# Flat2VR / UEVR Engineering Rules

You are working on a Flat2VR project that aims to add immersive PCVR interaction to existing PC games, using UEVR or another verified modding interface where appropriate.

TARGET:
- Headset: Meta Quest 3
- Mode: PCVR
- Desired features, when technically supported: independent physical hands, 6DoF hand tracking, two-handed weapons, physical weapon handling, manual magazine reload, and correct game-state synchronization.

YOUR FIRST RESPONSIBILITY IS TO UNDERSTAND THE GAME. DO NOT GUESS.

MANDATORY RULES:

1. RECONNAISSANCE FIRST
- On a new game or task, inspect the game, engine version, UEVR version, active profile, scripts, plugins, logs, and relevant files.
- Do not modify anything during the initial reconnaissance phase.
- Record unknown information as UNKNOWN.
- Do not claim an engine version or API capability without evidence.

2. SOURCE AND API VERIFICATION
- Search the available source, project files, API definitions, and working examples before using a class, object, function, property, component, or API.
- Never invent names or signatures.
- Do not copy code from another game without checking compatibility.
- Clearly distinguish confirmed facts from hypotheses.

3. REVERSE-ENGINEER THE ORIGINAL MECHANIC
- For weapon work, identify the weapon object, player/character owner, hand/grip logic, magazine object, attachment sockets, reload functions/events, animation notifies, ammo variables, chamber state, and firing restrictions.
- Determine whether the game has a real detachable magazine or only an animation/ammo-counter reload.
- Do not design physical reload behavior until the original system is understood.

4. PHYSICAL INTERACTION MUST CONNECT TO GAME STATE
- Moving a hand or magazine mesh is not sufficient.
- Keep hand transforms, magazine attachment, weapon reload state, ammunition, chamber state, and firing behavior synchronized.
- Never claim manual reload works based only on visual movement.

5. SMALL, TESTABLE TASKS
- Work on one milestone at a time.
- State the goal, evidence, files to change, implementation plan, risks, and test procedure before editing.
- Make the smallest patch possible.
- Do not combine unrelated features into one change.
- Stop and report blockers instead of guessing.

6. SAFETY AND REVERSIBILITY
- Inspect before modifying.
- Create a backup or Git checkpoint before changes.
- Prefer a dedicated mod/work directory.
- Do not overwrite original game files or executables without explicit approval and a verified backup.
- Report every changed file and provide rollback instructions.

7. TESTING
- Code inspection or compilation is not proof of in-game success.
- Define expected controller behavior and expected game-state behavior.
- Add useful logs.
- Provide exact in-game test steps.
- Do not report success until the user has reproduced the behavior in the actual game or equivalent runtime evidence proves it.

8. STATUS LABELS
Use:
CONFIRMED = directly verified.
LIKELY = evidence supports it but it is not tested.
UNKNOWN = not established.
BLOCKED = missing access, information, tools, or capability.

9. REQUIRED RESPONSE FORMAT
For each task, report:
- Objective
- Findings and evidence
- Confirmed / Likely / Unknown / Blocked items
- Relevant files and APIs
- Proposed smallest next change
- Risks and backup status
- Test procedure
- Actual test result (or explicitly NOT TESTED)
- Next step

10. DO NOT:
- Guess game mechanics.
- Invent UEVR APIs.
- Treat a hand attached to a gun as independent 6DoF tracking.
- Treat an animation as physical manual reload.
- Change ammo values as a substitute for magazine interaction.
- Make broad rewrites when a small patch is enough.
- Claim success without evidence.

When uncertain, stop, inspect, and ask for the missing evidence. Accuracy and reversibility are more important than speed.

## VR Bench testing principle
- VR Bench is the input and evidence layer. It launches the game, sends inputs, and records evidence. It never writes game code.
- OpenCode receives evidence (screenshots, video, logs, inputs, voice observations) — not just descriptions.
- All test launches go through VR Bench when available (consistent evidence).
- Every observation has timestamps. Voice, inputs, video, and logs share a synchronized timeline.
- Capture evidence around events: before, during, and after.
- Replayable test sessions enable regression verification.
- Until VR Bench is built, testing is manual (user in headset + MCP logs). Do not block gameplay milestones on VR Bench.

# FLAT2VR — AI GAME REVERSE ENGINEERING & VR DEVELOPMENT PROTOCOL

## Mission

Build a reusable framework for converting existing PC games into immersive PCVR experiences using Meta Quest 3 and OpenXR.

Required VR capabilities:
- 6DoF head tracking
- Physical left and right hands
- Two-handed weapon handling
- Physical weapon aiming
- Manual magazine removal and insertion
- Physical reload interactions
- Weapon holstering and retrieval
- Physical object interactions
- Correct hand and weapon animations
- Room-scale movement where technically possible

## PHASE 1 — SAFE GAME RECONNAISSANCE

Never modify original game files during reconnaissance.

1. Identify the executable.
2. Identify the engine and version.
3. Identify graphics API.
4. Identify executable architecture.
5. Inventory game archives.
6. Inventory models, textures and animations.
7. Identify scripting and configuration formats.
8. Identify available modding frameworks.
9. Determine whether source code or symbols are available.
10. Identify existing VR implementations.

Create:
- ENGINE_REPORT.md
- FILE_INVENTORY.md
- MODDING_TOOL_REPORT.md
- VR_FEASIBILITY_REPORT.md

## PHASE 2 — ENGINE-SPECIFIC ANALYSIS

Never assume every game uses Unreal Engine.

For Unreal:
- Investigate FModel.
- Investigate UAssetAPI.
- Investigate UE4SS.
- Investigate Dumper-7.
- Inspect reflection information.
- Inspect supported Blueprint data.

For Titanfall / Source-derived engines:
- Investigate Harmony VPK.
- Investigate Legion.
- Investigate RSPNVPK.
- Investigate Titanfall Blender Importer.
- Inspect available weapon models.
- Inspect animations and configuration files.

For native executable analysis:
- Use Ghidra.
- Use x64dbg.
- Use ReClass.NET.
- Use RenderDoc for graphics investigation.
- Document all findings and evidence.

Only use tools appropriate for the detected engine.

## PHASE 3 — GAME STRUCTURE DISCOVERY

Identify:

- Player character.
- Camera system.
- Weapon controller.
- Weapon objects.
- Weapon animations.
- Ammunition system.
- Reload functions.
- Input handling.
- Interaction system.
- Physics system.
- Animation skeletons.
- Hand attachment points.

For every finding, record:
- Object or function name.
- Source file or runtime location.
- How it was identified.
- Evidence.
- Confidence level.
- Whether it has been experimentally verified.

Never invent memory addresses, function names or structures.

## PHASE 4 — VR ARCHITECTURE

Design a game-specific VR integration.

Required systems:

1. OpenXR headset tracking.
2. Left and right controller tracking.
3. Camera transformation.
4. Weapon attachment.
5. Two-handed weapon constraints.
6. Hand inverse kinematics.
7. Physical magazine interaction.
8. Reload state machine.
9. Weapon holster system.
10. Interaction collision.
11. Original game input integration.
12. Audio and animation synchronization.

Prefer existing game logic over replacing it.

## PHASE 5 — IMPLEMENTATION

Before coding:

- Produce an architecture document.
- Identify required game hooks.
- Identify dependencies.
- Identify risks.
- Create a rollback plan.

Implement one feature at a time.

Never replace several game systems simultaneously.

## PHASE 6 — TESTING

Use VR Bench as an input-only testing and observation harness.

It must:
- Launch the game through its test launcher.
- Record keyboard and controller inputs.
- Record game logs.
- Capture screenshots.
- Record video.
- Support human headset playtesting.
- Support automated input sequences.
- Record spoken feedback during human testing.

AI must analyze actual test evidence.

It must not claim a feature works simply because the code compiles.

## PHASE 7 — QA

Test independently:

- Head tracking.
- Left hand tracking.
- Right hand tracking.
- Weapon aiming.
- Two-handed aiming.
- Magazine removal.
- Magazine insertion.
- Reload completion.
- Weapon firing.
- Weapon switching.
- Holstering.
- Performance.
- Stability.

Report PASS, FAIL or BLOCKED.

A feature is PASS only after actual validation.

## RULES

- Preserve original game files.
- Work on isolated copies.
- Respect game ownership and applicable licenses.
- Do not bypass DRM or anti-cheat.
- Do not upload copyrighted game assets.
- Do not assume extraction equals source-code recovery.
- Never fabricate reverse-engineering findings.
- Never silently change working systems.
- Document every modification.
- Require human approval before risky changes.

## FINAL OBJECTIVE

Build a reusable game reconnaissance, reverse-engineering,
VR development and testing framework.

The framework must support multiple game engines
rather than being limited to UEVR or Unreal Engine.

## Project-specific notes (SWAT Commander: Prologue)
- Working directory for reports: this folder. Research lives in C:\SWAT-VR-Research; UEVR profile in %APPDATA%\UnrealVRMod\SWATCommanderPrologue-Win64-Shipping.
- Engine: UE 4.27. Do not import UE5 profiles.
- Current script: twohand_grip.lua (autorun). Subject to replacement per user direction (Contractors-style free support hand + magazine grip zones).
- Backup before any edit to twohand_grip.lua.
