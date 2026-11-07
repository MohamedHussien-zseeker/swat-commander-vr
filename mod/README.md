# SWAT Commander: Prologue — UEVR Mod (profile snapshot)

This folder holds a sanitized snapshot of the live UEVR profile for
SWAT Commander: Prologue, taken from:

`%APPDATA%\UnrealVRMod\SWATCommanderPrologue-Win64-Shipping`

## Layout

- `uevr-profile/scripts/` — UEVR Lua scripts (including `twohand_grip.lua`
  and its `autorun/` copy, plus the `libs/` and `config/` dependencies).
- `uevr-profile/config.txt`, `cameras.txt` — UEVR profile configuration.
- `uevr-profile/data/` — hand/pawn parameter JSON.
- `variants/` — alternate script variants (e.g. `twohand_grip_v2.lua`).
- `backups-defaultproject/` — earlier script snapshots from the working dir.

## Not included (sanitized out)

- `log.txt`, `imgui.ini`, `uevr_mcp_last_breadcrumb.json`
- `cache/`, `plugins/` (binaries), `uobjecthook/`, `shader_overrides/`
- Any runtime-generated state.

The live profile remains the source of truth at runtime; this snapshot is
for version control and review. Re-sync by re-copying from the profile dir.