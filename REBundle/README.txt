UEVR reverse-engineering bundle

Files:
  - uevr_types.jmap
    Minimal jmap-compatible JSON for Binary Ninja. Intended for trumank/jmap's ue_binja importer.
    Current limitation: live reflection does not expose instance-vtable tables, so this export focuses on class/struct reconstruction rather than vtable/exec symbol recovery.

  - uevr_types.hpp
    Parser-friendly local type header for IDA Pro and Binary Ninja.
    When the reflection dump cannot prove a field's exact storage type, the field is emitted as an opaque byte array sized from the next known offset.

  - import_ida_types.py
    IDAPython helper. Run it from File -> Script file... to import the header into Local Types.

  - import_binary_ninja_types.py
    Binary Ninja helper. Run it in the scripting console with an open BinaryView (`bv` must exist) to import the header as user types.

Binary Ninja paths:
  1. Preferred: use ue_binja from https://github.com/trumank/jmap and import uevr_types.jmap.
  2. Fallback: run import_binary_ninja_types.py to import the plain header instead.

IDA Pro path:
  1. Open the target database.
  2. Run import_ida_types.py.
  3. Review Local Types and apply them manually where needed.
