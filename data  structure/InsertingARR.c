#include<stdio.h>

int main()
{
int i,a[10],n,val,pos;

printf("Enter the size of the array\n");
scanf("%d",&n);

printf("Enter the elements of the array\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

printf("Enter the value you want to insert:\n");
scanf("%d",&val);

printf("Enter the position you want to insert your value:\n");
scanf("%d",&pos);
pos--;

for(i=n-1;i>=pos;i--){
    a[i+1] = a[i];
}

a[pos] = val;

printf("Array after insertion :\n");
for(i=0;i<=n;i++){
    printf("%d\n",a[i]);
}






}
