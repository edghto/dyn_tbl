#include "entry.h"

void* bazinga(void* __attribute__((unused)) arg)
{
    return "BAZINGA";
}

DYN_TBL_REGISTER(ex_simple_entry_t, bazinga, { .name = "BAZINGA", .handler = bazinga });
