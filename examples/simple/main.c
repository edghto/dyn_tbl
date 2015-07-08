#include <stdio.h>
#include "entry.h"

int main(int argc, char* argv[])
{
    ex_simple_entry_t* iter = (ex_simple_entry_t*) &__dyn_tbl_begin;
    ex_simple_entry_t* end  = (ex_simple_entry_t*) &__dyn_tbl_end;

    while(iter != end)
    {
        printf("%s => %s\n", iter->name, iter->handler(NULL));
        iter += 1;
    }

    return 0;
}
