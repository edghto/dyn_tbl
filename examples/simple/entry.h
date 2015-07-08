#ifndef EX_SIMPLE_ENTRY
#define EX_SIMPLE_ENTRY

#include <dyn_tbl_entry.h>

typedef struct
{
	char* name;
	void* (*handler)(void*);
} ex_simple_entry_t;

#endif /* EX_SIMPLE_ENTRY */

