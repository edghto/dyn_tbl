

SECTIONS
{
    . = ALIGN(4);
    __dyn_tbl_begin = .;
    .dyn_tbl :
    {
        KEEP( *(.dyn_tbl) )
    }
    __dyn_tbl_end = .;
}

INSERT AFTER .data;
