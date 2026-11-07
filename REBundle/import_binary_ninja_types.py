import os
from binaryninja import log_error, log_info

HEADER_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'uevr_types.hpp')

def run(bv):
    with open(HEADER_PATH, 'r', encoding='utf-8') as f:
        source = f.read()

    result = bv.parse_types_from_string(source)
    type_defs = [(name, type_obj) for name, type_obj in result.types.items()]
    if not type_defs:
        log_error(f'No types parsed from {HEADER_PATH}')
        return

    bv.define_user_types(type_defs)
    log_info(f'Imported {len(type_defs)} user types from {HEADER_PATH}')

run(bv)