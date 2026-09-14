/*registers.c*/

#define REGISTERS_

#define _ASCII 0x011

/*register value*/
#define _MOV 0x1

struct reg_tbl {
    int mov;
    int vm; /*video mode*/
};

void mov_vm_value( struct reg_tbl* r ) {
    char mov_ascii[3] = "mov";
    char vm_ascii[2] = "vm";
        for( int i = 0 ; i < r->mov; i++ ) {
                while( r->mov != 0 ) {
                    _ASCII << mov_ascii;
                }
        }
}


/*main()*/
int main( int argc, char**argv[] ) {
    return 0;
}
