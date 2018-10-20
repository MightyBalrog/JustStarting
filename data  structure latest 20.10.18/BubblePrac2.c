#include<stdio.h>

int main()
{
    int a[1000],i,j,n,swap;
    int low,high,mid,search;

    printf("Enter the size of the arrauy:\n");
    scanf("%d",&n);

    printf("Enter the elements in the array:\n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap = a[j+1];
                a[j+1] = a[j];
                a[j] = swap;
            }
        }
    }
    printf("Numbers after sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    printf("Enter the number you wish to search:\n");
    scanf("%d",&search);

    low = 1;
    high = n;

    do{
        mid = (high+low)/2;
        if(search<a[mid])
            high = mid-1;
        else if(search>a[mid])
            low = mid+1;
    }
    while(search != a[mid] && low <= high);
    if(search == a[mid]){
    printf("%d found at location %d\n",search,mid+1);}
    else{
        printf("%d is not present in the list\n",search);
    }
}
