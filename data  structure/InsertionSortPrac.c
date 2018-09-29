#include<stdio.h>

void insert_sort(int a[],int n)
{
    int i,j,temp;

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

    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    insert_sort(a,n);

    printf("The array in sorted order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
