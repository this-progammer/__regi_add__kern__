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
        if( r->mov && r->vm ) {
            (char*)("mov");
            (char*)("vm");
        }
}


/*main()*/
int main( int argc, char**argv[] ) {
    return 0;
}
