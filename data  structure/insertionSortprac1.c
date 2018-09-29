#include<stdio.h>

void ins_sort(int a[],int n)
{
    int temp,i,j;

    for(i=1;i<n;i++)
    {
        temp = a[i];
        for(j=i-1;j>=0 && temp<a[j];j--)
        {
            a[j+1] = a[j];
            a[j] = temp;
        }
    }
}

int main()
{
    int n,i,a[10];

    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    printf("Enter the elements in the list:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ins_sort(a,n);

    printf("Number in sorted order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
