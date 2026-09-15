/*bios.c*/

#define BIOS_C

/*dword*/
#define dword unsigned int

static struct bios_k {
    dword bs_org = 0x7C00; /*boot sector address*/
    int bs_bits = 16; /*real mode*/
    dword end_org = 0x55AA;/*end of 512 kb boot sector*/
};
