#include<stdio.h>

int main()
{
    int i,j,n,a[1000],swap,search;

    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Elements in sorted order:\n");

    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }



    printf("Enter the number you wish to search:\n");
    scanf("%d",&search);

     // LINEAR SEARCH--------->
/*
    for(i=0;i<n;i++)
    {
        if(search==a[j]){
            printf("%d found at location %d",search,n);
            break;
        }
    }
    if(search==i){
        printf("Number not found:\n");
    }
*/
        //BINARY SEARCH
int first,last,mid;
first = 0;
last = n;

do{
    mid = (first+last)/2;

    if(search>a[mid])
        first = mid+1;
    if(search<a[mid])
        last = mid-1;

}
while(search != a[mid] && first<=last);{
    if(search == a[mid]){
        printf("Number found\n");}
    else
        printf("Number is not present in the list");
}
return 0;

}
