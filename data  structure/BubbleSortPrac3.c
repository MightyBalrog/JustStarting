#include<stdio.h>

int main()
{
    int i,n,j,swap,a[10];

    printf("Enter the size of the list:\n");
    scanf("%d",&n);

    printf("Enter the items:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap = a[j+1];
                a[j+1] = a[j];
                a[j] = swap;
            }
        }
    }
    printf("Sorted list is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
