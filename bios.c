/*bios.c*/

#define BIOS_C

#define dword unsigned int

static struct bios_k {
    dword bs_org = 0x7C00; /*boot sector address*/
    int bs_bits = 16; /*real mode*/
};
