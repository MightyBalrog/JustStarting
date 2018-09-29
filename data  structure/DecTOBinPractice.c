#include<stdio.h>

void Dec(int n)
{
    int i,b[1000],counter=0;

    while(n>0){
        b[counter] = n%2;
        n = n/2;
        counter++;

    }
    for(i=counter-1;i>=0;i--){
        printf("%d",b[i]);
    }
}

int main(){
    int n;
    printf("Enter the number you want to convert in binary:\n");
    scanf("%d",&n);
    Dec(n);

}
