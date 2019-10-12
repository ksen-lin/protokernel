OUTPUT_FORMAT(elf32-i386)
ENTRY(start)
LMA = 0x100000;
SECTIONS
{
  . = LMA;
  .text : { *(.text) }
  .data : { *(.data) }
  .bss  : { *(.bss)  }
}
