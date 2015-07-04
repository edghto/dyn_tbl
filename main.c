#include <stdio.h>
#include "dyn_tbl_entry.h"

int main(int argc, char* argv[])
{
    dyn_tbl_entry_t* iter = (dyn_tbl_entry_t*) &__dyn_tbl_begin;
    dyn_tbl_entry_t* end  = (dyn_tbl_entry_t*) &__dyn_tbl_end;

    while(iter != end)
    {
        printf("%s => %s\n", iter->name, iter->handler(NULL));
        iter += 1;
    }

    return 0;
}
