#include "entry.h"

void* foo(void* __attribute__((unused)) arg)
{
    return "FOO";
}

DYN_TBL_REGISTER(ex_simple_entry_t, foo, { .name = "FOO", .handler = foo });
