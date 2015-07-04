#include "dyn_tbl_entry.h"

void* foo(void* __attribute__((unused)) arg)
{
    return "FOO";
}

DYN_TBL_REGISTER(foo, foo);
