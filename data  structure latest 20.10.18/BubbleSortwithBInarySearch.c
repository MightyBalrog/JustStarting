#include<stdio.h>

void Sort(int a[],int n)
{
    int i,j,swap;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }

}
/*
void BinSearch(int pos,int a[],int n)
{
    int mid,first,last;

    first = 0;
    last = n;

    do
    {
        mid=(first+last)/2;

        if(pos<a[mid])
           {
              last = mid-1;
                return;
           }
        if(pos>a[mid])
        {
            first = mid+1;
        }
    }
    while(pos != a[mid] && first<=last);
    if(pos == a[mid])
    {
        printf("Number found.\n");
    }
    else
        printf("Number does not exists in the array.\n");
}
*/

int main()
{
    int i,n,a[10],pos;
    printf("Enter the size of your array:\n");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Sort(a,n);

    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    printf("Enter the number to be searched:\n");
    scanf("%d",&pos);

    int mid,first,last;

    first = 0;
    last = n;

    do
    {
        mid=(first+last)/2;

        if(pos<a[mid])
           {
              last = mid-1;
                return;
           }
        if(pos>a[mid])
        {
            first = mid+1;
        }
    }
    while(pos != a[mid] && first<=last);
    if(pos == a[mid])
    {
        printf("Number found.\n");
    }
    else
        printf("Number does not exists in the array.\n");
}
