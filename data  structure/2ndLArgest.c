#include<stdio.h>

int main()
{
    int a[1000],i,j,n,swap;

    printf("ENter the size of the array:\n");
    scanf("%d",&n);

    printf("Enter the elements inthe arra:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
            if(a[0]<a[i])
            a[0] = a[i];

    }
    printf("The largest digit is %d ",a[0-1]);
}
