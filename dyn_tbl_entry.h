#ifndef DYN_TBL_ENTRY_H_INCLUDED
#define DYN_TBL_ENTRY_H_INCLUDED

extern void* __dyn_tbl_begin;
extern void* __dyn_tbl_end;


#define DYN_TBL_SECTION  __attribute__((unused, section(".dyn_tbl") aligned(4)))
#define DYN_TBL_REGISTER(entry_name, in_handler) \
dyn_tbl_entry_t  __dyn_tbl_##entry_name DYN_TBL_SECTION = \
{ .name = #entry_name, .handler = in_handler }


typedef struct
{
    char* name;
    void* (*handler)(void*);
} dyn_tbl_entry_t;


#endif // DYN_TBL_ENTRY_H_INCLUDED
