/*bios.c*/
#define BIOS_C

/*dword*/
typedef uint32_t dword;

/*boot sector info*/
struct bios_k {
    dword bs_org; /*boot sector address*/
    int bs_bits; /*real mode*/
    dword end_org;/*boot sector signature*/
};

static bios_k* bios_skel {
    .bs_org = 0x7C00;
    .bs_bits = 16;
    .end_org = 0x55AA;
}

/*get_boot_sector_org()*/
dword get_boot_sector_org( struct bios_k* k ) {
    return k->bs_org;
}

/*get_boot_sector_bits()*/
int get_boot_sector_bits( struct bios_k* k ) {
    return k->bs_bits;
}

/*get_end_org()*/
dword get_end_org( struct bios_k* k ) {
    return k->end_org;
}

/*set_bs_address()*/
void set_bs_address( struct bios_k* k, dword adr ) {
    for( int i = 0; i <= 0; i++ ) {
         dword*& addr = adr;
         *k->bs_org = addr;
    }
  get_boot_sector_org( k );
}

/*set_boot_sector_bits()*/
void set_boot_sector_bits( struct bios_k* k, int bits ) {
    for( int i = 0; i < bits; i++ ) {
         *k->bs_bits = bits;
    }
  get_boot_sector_bits( k );
}

/*set_end_org()*/
void set_end_org( bios_k* k, dword org ) {
    for( int i = 0; i <= 0; i++ ) {
        *k->end_org = org;
    }
 get_end_org( k );
}
