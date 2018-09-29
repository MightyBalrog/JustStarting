#include<stdio.h>
void main()
{
    int a=10,b=20,c;
    asm
    {
        mov ax,a
        mov bx,b
        add ax,bx
        mov c,ax
    }
    printf("Value of c %d\n",c);

}
