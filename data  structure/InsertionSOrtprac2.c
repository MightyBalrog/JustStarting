#include<stdio.h>

void Insert_Sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++){
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
    int a[10],i,n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    printf("Start entering the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    Insert_Sort(a,n);

    printf("Numbers in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
