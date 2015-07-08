#include "entry.h"

void* bar(void* __attribute__((unused)) arg)
{
    return "BAR";
}

DYN_TBL_REGISTER(ex_simple_entry_t, bar, { .name = "BAR", .handler = bar });
