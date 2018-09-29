#include<stdio.h>

int main()
{
    int i,n,a[10]={10,22,34,65,11,98,10,44,55,66},b[20];//my array a[10] was smaller so I had to create a new array b

    for(i=0;i<10;i++)
    {
        b[i] = a[i];//here I have copied all the elements in the array a to c

    }
    b[0] = 8;//replaced the array
    b[10] = 19;//ADDED a few more elements
    b[11] = 77;
    for(i=0;i<20;i++){    //the few last elements are giving garbage because we haven't initialized them
        printf("%d \n",b[i]);
    }


}
