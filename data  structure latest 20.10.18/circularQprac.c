#include<stdio.h>
#include<stdlib.h>
#define MAX 15
int a[MAX];
int front = -1;
int rear = -1;

void Enqueue()
{
    int e;
    printf("Enter the element to be inserted :\n");
    scanf("%d",&e);

    if((rear+1)%MAX==front)
    {
        printf("STACK:OVERFLOW\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = a[0];
        rear = a[0];
        rear = a[e];
    }
    else
        rear = (rear+1)%MAX;
        a[rear] = e;
    printf("Element inserted successfully.\n");
}

void Dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is already empty.Nothing to dequeue\n");
        return;
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
        front = (front+1)%MAX;
    printf("Element dequeued successfully.\n");
}
void Display()
{
    int i;
    printf("QUEUE IS :\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


}

int main()
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
