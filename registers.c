/*registers.c*/

#define REGISTERS_

#define _ASCII 0x011

/*register value*/
#define _MOV 0x1

struct reg_tbl {
    int mov;
    int vm; /*video mode*/
};

int vm_set_value( struct reg_tbl* r , int ah ) {
    char line[1024] = (char*)("%i %i, %ah", r->mov, r->vm, ah);
        if( ah == 0x0E ) {
            return _ASCII;
        }
}

int mov_vm_value( struct reg_tbl* r ) {
        if( r->mov && r->vm ) {
        }
    return _MOV;
}


/*main()*/
int main( int argc, char**argv[] ) {
    return 0;
}
