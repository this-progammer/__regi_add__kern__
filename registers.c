/*registers.c*/

#define REGISTERS_

#define _ASCII 0x011

/*register value*/
#define _MOV 0x1

/*&=reg_tbl=&*/
struct reg_tbl {
    int mov;
    int vm; /*video mode*/
};

/*cpu_read_mov_reg()*/
int cpu_read_mov_reg() {
   int mov = _MOV;
   while( mov ) {
           if( mov >> (int)(0x1) ) {
               static struct cpu, * __cpu_ptr;
               for(;; __cpu_ptr ) {
                   memset(&mov, 0x1, &__cpu_ptr);
               }
           }
   }
 return 0x1;
}

/*vm_set_value()*/
int vm_set_value( struct reg_tbl* r , int ah ) {
    char line[16] = (char*)("%i %i, %i", r->mov, r->vm, ah);
        if( ah == 0x0E ) {
            for( int i = 0; i < 16; i++ ) {
                *line[i][sizeof(16) - ah] = "0x0E";
            }
            return _ASCII;
        }
    return ah;
}

/*mov_vm_value()*/
int mov_vm_value( struct reg_tbl* r ) {
        if( r->mov && r->vm ) {
        }
    return _MOV;
}


/*main()*/
int main( int argc, char**argv[] ) {
    return 0;
}
