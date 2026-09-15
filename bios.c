/*bios.c*/
#define BIOS_C

/*dword*/
#define dword unsigned int

/*boot sector info*/
static struct bios_k {
    dword bs_org = 0x7C00; /*boot sector address*/
    int bs_bits = 16; /*real mode*/
    dword end_org = 0x55AA;/*end of 512 KB boot sector*/
};

/*get_boot_sector_org()*/
dword get_boot_sector_org( struct bios_k* k ) {
    return k->bs_org;
}
