#ifndef DYN_TBL_ENTRY_H_INCLUDED
#define DYN_TBL_ENTRY_H_INCLUDED

extern void* __dyn_tbl_begin;
extern void* __dyn_tbl_end;


#define DYN_TBL_SECTION  __attribute__((unused, section(".dyn_tbl") aligned(4)))
#define DYN_TBL_REGISTER(entry_type, entry_name, ...) \
entry_type  __dyn_tbl_##entry_name DYN_TBL_SECTION = __VA_ARGS__

#endif // DYN_TBL_ENTRY_H_INCLUDED
