# VR Bench — Evidence-Driven Testing Architecture

**Status:** Foundational architecture specification. Not yet implemented.
**Date:** 2026-11-06
**Applies to:** Flat2VR / UEVR modding (SWAT Commander: Prologue and future games).

## Core principle

> VR Bench controls and observes. It does not develop or modify the game.

VR Bench is the **input and evidence layer** between the AI developer (OpenCode) and the running game. The game's original execution and logic remain untouched by VR Bench. OpenCode receives **evidence**, not descriptions, and must verify fixes against that evidence.

```
OpenCode (AI developer)
   |  analyzes evidence, writes code, implements fixes
   v
VR Bench (input + evidence layer)
   |  launches game, sends inputs, records evidence
   v
Running game (original game, untouched)
   ^
   |
Evidence collection: input history, screenshots, video, logs, voice, timestamps
```

## Two testing modes

### Mode A — Automated testing
- VR Bench launches the game.
- OpenCode provides a sequence of inputs.
- VR Bench performs those inputs.
- It records screenshots, video, logs, and input history.
- OpenCode analyzes the results.

### Mode B — Human testing
- User puts on Quest 3.
- VR Bench launches the game and hands over control.
- User plays naturally and speaks observations.
- Everything is recorded and synchronized (voice, inputs, video, logs).

## Voice-hook system
Voice observations are recognized as development events and captured with a timestamped evidence window (before/during/after).

Example: user says "The left hand isn't grabbing the magazine correctly." at 00:04:32.
- Before (5 s): frames leading up to the problem.
- During: exact frame at the voice timestamp.
- After (5 s): frames following the problem.

VR Bench must maintain a **short rolling recording buffer** so frames before transcription completes are preserved.

## Debrief command
After a run, the user says "Debrief my run." VR Bench produces a structured report:

| Evidence | Information |
|---|---|
| Voice | Full transcription |
| Observations | Categorized issues |
| Screenshots | Before, during, after |
| Video | Relevant timestamps |
| Inputs | Exact buttons and controller movements |
| Game logs | Errors and runtime events |
| Tasks | Actionable development tickets |

Example output: `Debrief report — Run #004` with bug ID, left/right controller state, user observation, screenshot evidence, video reference, runtime logs, and a suggested development task.

## Five mandatory rules
1. VR Bench never writes game code. No modifying Blueprints, C++, assets, or game logic.
2. All test launches go through VR Bench. Consistent evidence collection.
3. Every observation has timestamps. Voice, inputs, video, and logs share a synchronized timeline.
4. Capture evidence around events. Before, during, and after — not just one screenshot.
5. AI developers receive evidence, not just descriptions. They must use the actual recorded behavior to investigate and verify fixes.

## Replayable test sessions
If a problem occurs during human testing, VR Bench saves the exact input sequence and timing so an automated test can reproduce it. Development cycle:

1. Human discovers a bug.
2. VR Bench records the complete session.
3. OpenCode analyzes and implements a fix.
4. VR Bench replays the test.
5. OpenCode compares before and after.
6. Fix verified with evidence.

## Current capability (UEVR-MCP) vs. VR Bench

What already exists via UEVR-MCP (partial evidence layer):
- Game launch/injection: `uevr_setup_game`, `uevr_wait_for_plugin`.
- Logs: `uevr_get_log`, `uevr_get_diagnostics`, `uevr_uevr_log`.
- Object inspection: `uevr_inspect_object`, `uevr_read_field`, `uevr_write_field`.
- Lua exec: `uevr_lua_exec`, `uevr_lua_write_script`.
- VR poses: `uevr_vr_poses`, `uevr_vr_status`.
- Screenshots: via browser/preview tools (limited).
- ProcessEvent listener: `uevr_process_event_start/recent/functions`.

What is MISSING for full VR Bench:
- Automated input injection (controller button/axis simulation) — UEVR has no "inject input" Lua API in our build.
- Video recording (continuous capture + timestamped clips).
- Voice transcription + timestamped event detection.
- Synchronized timeline across voice/inputs/video/logs.
- Replay of recorded input sequences.
- Debrief report generation.

## Relationship to milestones
Each milestone's test procedure (per AGENTS.md Rule 7) should be executed through VR Bench when available, producing evidence that OpenCode uses to verify or reject the change. Until VR Bench is built, testing is manual (user in headset + MCP logs).

## Recommendation
VR Bench is a foundational architecture, not a feature to build in one pass. Suggested order:
1. Start with automated input injection (highest value — enables reproducible tests).
2. Add screenshot capture at timestamps (already partially available).
3. Add voice transcription + event detection (human testing mode).
4. Add replay and debrief generation.

Do not block gameplay milestones (trigger, recoil, reload) on VR Bench. VR Bench improves testing quality but is not a prerequisite for implementation.

---

*VR Bench never writes game code. It is the eyes, ears, hands, and flight recorder of the development environment. OpenCode is the engineer.*
