;  *bios.asm

section .000000  section .data
section .000001  __bios_org : DWORD 10h
section .000002   BIOS_K:
section .000003      mov ebx, DWORD PTR __bios_org
