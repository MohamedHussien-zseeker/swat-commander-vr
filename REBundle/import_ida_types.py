import os
import ida_kernwin
import idc

BASE_DIR = os.path.dirname(os.path.abspath(__file__))
HEADER_PATH = os.path.join(BASE_DIR, 'uevr_types.hpp')

with open(HEADER_PATH, 'r', encoding='utf-8') as f:
    source = f.read()

flags = idc.PT_TYP | idc.PT_REPLACE
errors = idc.parse_decls(source, flags)

message = f'Imported local types from {HEADER_PATH} with {errors} parse error(s).'
print(message)
try:
    ida_kernwin.info(message)
except Exception:
    pass