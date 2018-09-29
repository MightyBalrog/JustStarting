#include<stdio.h>

void DectoBin(int n)
{
    int b[1000];


    int counter=0;
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

    printf("Enter the deimal number to be converted into binary\n");
    scanf("%d",&n);
    DectoBin(n);

    return 0;


}
