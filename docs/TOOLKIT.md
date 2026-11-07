# Flat2VR Toolkit Inventory

**Date:** 2026-11-06
**Purpose:** Record what tools are already available before installing anything new. Per the Flat2VR protocol, inspect the existing setup first.

## Already available (do NOT duplicate)

| Tool | Location | Status |
|---|---|---|
| UEVR-MCP v1.0.0 | `C:\Tools\UevrMcp-v1.0.0` | Installed, MCP registered (182 tools) |
| UEVR backend | `C:\Users\Ghost\Downloads\uevr58-test\UEVRBackend.dll` (branch ue57performance) | Injected into game |
| UEVR profile | `%APPDATA%\UnrealVRMod\SWATCommanderPrologue-Win64-Shipping` | Active |
| OpenCode | `C:\Users\Ghost\.config\opencode\opencode.json` | MCP server "uevr" registered |
| Git | `C:\Program Files\Git` | Available |
| Python | `C:\Users\Ghost\AppData\Local\Microsoft\WindowsApps\python.exe` | Available |
| FModel-compatible USMAP | `C:\SWAT-VR-Research\SWATCommanderPrologue-Win64-Shipping.usmap` | Generated |
| Reflection JSON | `C:\SWAT-VR-Research\SWATCommander-reflection.json` | 354 types, 1.1 MB |
| Mirror project | `C:\SWAT-VR-Research\MirrorProject\` | 354 headers, buildable UE4.27 |
| RE bundle | `C:\SWAT-VR-Research\REBundle\` | jmap, hpp, IDA/Binary Ninja importers |
| Dumper-7 | `C:\Tools\UevrMcp-v1.0.0\bin\dumper7.dll` | Vendored |
| UE4SS (dev) | `C:\Tools\UE4SS` | Downloaded (experimental-latest, v3.0.1-1214-g69f1eba5) | Lua scripting, SDK generator, property editor, dumper. NOT installed into game (would conflict with UEVR). Reference/analysis only. |
| Blender | Not verified installed | UNKNOWN |

## Reference repositories (cloned, read-only)

| Repo | Location | License | Engine | Value |
|---|---|---|---|---|
| VRExpansionPlugin | `references\VRExpansionPlugin` | MIT | UE4/UE5 | Virtual stock, secondary grip, recoil patterns |
| TPS-Shooter-System | `references\TPS-Shooter-System` | MIT | UE4.27 | Magazine reload state machine |
| uevrlib | `references\uevrlib` | MIT | UEVR (Lua) | Hands, IK, attachments (incompatible: needs uevr.params) |
| hands_tutorial_uevr | `references\hands_tutorial_uevr` | (check) | UEVR (Lua) | Custom hands config tool (incompatible: needs uevr.params) |

## Not yet installed (candidates per Flat2VR protocol)

| Tool | Purpose | Priority | Notes |
|---|---|---|---|
| FModel | Explore Unreal archives, inspect/export models/textures | High | Need usmap (already have) |
| UAssetAPI / UAssetGUI | Read .uasset, inspect Blueprint bytecode | Medium | Useful for Blueprint reload logic |
| UE4SS | Runtime reflection, scripting | Low | UEVR already provides reflection |
| Ghidra | Disassemble/decompile executables | Medium | For native reverse engineering |
| x64dbg | Debug Windows executables | Low | For crash investigation |
| RenderDoc | Frame capture, rendering investigation | Low | For graphics bugs |
| Blender | Model/animation inspection, hand attachment points | Medium | Not verified installed |

## Engine detection (SWAT)

- **Engine:** Unreal Engine 4.27 (confirmed: exe FileVersionRaw 4.27.2.0, UEVR log, WindowsNoEditor paks, PhysX3).
- **Not** Titanfall/Source. Do NOT use Harmony VPK, Legion, RSPNVPK.
- **Not** MW2. Do NOT use Overlord approach.

## Tool selection rule
Only use tools appropriate for the detected engine. SWAT is UE4.27. Primary tools: UEVR-MCP (already have), FModel (candidate), UAssetAPI (candidate), Blender (candidate). Ghidra/x64dbg/RenderDoc for native analysis if needed.

## Recommendation
Before installing any new tool, verify it is not already available (this inventory). Prefer tools that output structured data AI can consume (JSON, reflection, metadata). Do not duplicate existing capabilities.
