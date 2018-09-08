#include<stdio.h>

int main()
{
    int i,j,swap,n,a[1000],search;
     int first,mid,end;

    printf("enter the size of the array:\n");
    scanf("%d",&n);

    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++){
        scanf(" %d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }
    printf("The numbers in sorted order are :\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);

    }


    printf("Enter the number to be searched:\n");
    scanf("%d",&search);

    first = 0;
    end = n;
    do{

        mid = (first+end)/2;

        if(search < a[mid])
            end = mid - 1;

        else if(search > a[mid])
            first = mid + 1;
    }
        while(search != a[mid] && first<=end);
            if(search == a[mid]){
                printf("%d found at location %d",search,mid+1);
            }
            else
                printf("%d is not present in the array,please check your input and try again ",search);

                return 0;

}


