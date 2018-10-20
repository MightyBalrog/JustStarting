#include<stdio.h>
void swap(int,int);
int main()
{
    int a=20,b=30;

    printf("before swapping %d %d\n",a,b);
    swap(a,b);
    printf("after swaooing:\n");
    printf("a=%d\nb=%d\n",a,b);

    return 0;
}

void swap(int x,int y)
{

    int temp;
    temp=x;
    x=y;
    y=temp;

}

