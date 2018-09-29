#include<stdio.h>

int main()
{



int i,j,swap,a[100],n;

printf("Enter the size of the array\n");
scanf("%d",&n);

printf("Enter the elements in the array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++)
    {
        if(a[j]>a[j+1]){
            swap = a[j];
            a[j] = a[j+1];
            a[j+1] = swap;
        }
    }
    printf("The numbers in ascending order :\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
}
