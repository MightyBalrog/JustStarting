#include<stdio.h>

void DectoBin(int n)
{
    int a[20],i,counter;

    counter = 0;
    while(n>0)
    {
        a[counter] = n%2;
        n = n/2;
        counter++;
    }
    for(i=counter-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number to be changed into binary:\n");
    scanf("%d",&n);
    DectoBin(n);
}

/*
void DectoBin(int n)
{
   int b[1000];

    int counter = 0;

    while(n>0)
    {
        b[counter] = n%2;
        n = n/2;
        counter++;
    }

    for(int i = counter-1;i>=0;i--)
    {
        printf("%d",b[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number to be changed into binary\n");
    scanf("%d",&n);
    DectoBin(n);
}

*/

