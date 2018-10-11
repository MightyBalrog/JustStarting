#include<stdio.h>
#define MAX 10
int top = -1;
int a[MAX];

void Push(int x)
{
    if(top == MAX-1)
    {
        printf("ERROR:STACKOVERFLOW");
        return;
    }
    top++;
    a[top]=x;
}
void Pop()
{
    if(top == -1)
    {
        printf("No element to pop");
    }
    top--;
}
void Print()
{
    int i;
    printf("stack is:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int i,x,n;
    printf("How many items you want to insert in the stack?\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the items\n");
        scanf("%d",&x);
        Push(x);
        Print();
    }
}
