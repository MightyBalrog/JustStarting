#include<stdio.h>

int main()
{
    int i,n,a[1000],pos,item;

    printf("Enter the size of the  array:\n");
    scanf("%d",&n);

    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++){
        scanf(" %d",&a[i]);
    }

    printf("Enter the element you want to insert in the array:\n");
    scanf("%d",&item);

    printf("Enter the position you want to insert the new element in:\n");
    scanf("%d",&pos);

    pos--;

    for(i=n-1;i>=pos;i--){
        a[i+1] = a[i];
    }
    a[pos] = item;

    printf("array after insertion :\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
}
