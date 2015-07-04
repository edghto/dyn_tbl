#include "dyn_tbl_entry.h"

void* bazinga(void* __attribute__((unused)) arg)
{
    return "BAZINGA";
}

DYN_TBL_REGISTER(bazinga, bazinga);
