#include<stdio.h>

int main()
{
    int a[100],n,search,i;

    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the number you wish to search:\n");
    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
        if(search == a[i]){
            printf("Number found");
            break;
        }
    }
    if(i == n){
        printf("Number not found");
    }
}
