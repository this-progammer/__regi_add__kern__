;  *bios.asm

.data
  __bios_mem_addr : DWORD 10h

.code
FETCH_BIOS PROC
      mov edx, DWORD PTR[__bios_mem_addr]
      le [__bios_mem_addr]
      jmp [edx]

      ret
FETCH_BIOS ENDP
