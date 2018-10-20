#include<stdio.h>
#include<stdlib.h>
#define MAX 15
int front = -1;
int rear = -1;
int a[MAX];

void Enqueue()
{
    int e;
    printf("Enter the number you want to enter:\n");
    scanf("%d",&e);

    if((rear+1)%MAX == front)
    {
        printf("ERROR:QUEUE IS FULL\n");
    }
    else if(rear == -1 && front == -1)
    {
        front = rear = a[0];
        a[rear] = e;
    }
    else
        rear = (rear+1)%MAX;
        a[rear] = e;
}
void Dequeue()
{
    if(rear == -1 && front == -1)
    {
        printf("Queue is empty.\n");
    }
    else if(rear == front)
    {
        a[rear] = a[front] = -1;
    }
    else
        front = (front+1)%MAX;
}
void Display()
{
    int i;
    printf("Queue is:\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}

void main()
{
    int ch;
    while(1)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 : Enqueue();break;
            case 2 : Dequeue();break;
            case 3 : Display();break;
            case 4 : exit(0);break;
        }
    }
}
