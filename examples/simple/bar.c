#include "dyn_tbl_entry.h"

void* bar(void* __attribute__((unused)) arg)
{
    return "BAR";
}

DYN_TBL_REGISTER(bar, bar);
