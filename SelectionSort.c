#include<stdio.h>

int min(int a[],int k,int n)
{
    int LOC,MIN,i;

    MIN = a[k];
    LOC = k;

    for(i=k+1;i<=n-1;i++)
    {
        if(MIN > a[i])
        {
            MIN = a[i];
            LOC = i;
        }
    }
    return(LOC);
}

int main()
{
    int n,a[100],LOC,k,temp;

    printf("Enter the size of the list:\n");
    scanf("%d",&n);

    printf("Enter the elements in the list:\n");
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }

    for(k=0;k<=n-2;k++)
    {
        LOC=min(a,k,n);
        temp = a[k];
        a[k] = a[LOC];
        a[LOC] = temp;
    }
    printf("Numbers in sorted array are:\n");
    for(k=0;k<n;k++){
        printf("%d\n",a[k]);
    }


}
