#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int a[MAX];
int front = -1;
int rear = -1;

void IsEmpty()
{
   if(front == -1 && rear == -1)
   {
       printf("Queue is Empty\n");
   }
   else
    printf("Queue is not empty\n");

}
void Enqueue()
{
    int e;
    printf("Enter the number you wish to enter:\n");
    scanf("%d",&e);
    if((rear+1)%MAX == front)
    {
        printf("Queue is full\n");
        return;
    }
    else if(front == -1 && rear == -1)
    {
        front = a[0];
        rear = a[0];
        a[rear] = e;
    }
    else{
        rear = (rear+1)%MAX;
        a[rear] = e;
        }
    printf("Element inserted successfully\n");
}
void Dequeue()
{
    //front and rear are -1 means queue is already empty
    if(front == -1 && rear == -1)
    {
        printf("NO element to dequeue,first enqueue some elements\n");
        return;
    }
    //when front and rear are same (-1 excluded)it means queue has only 1 element
    else if(front == rear)
    {
        //so to dequeue only one element all we have to do is,set both as -1,so our queue will be empty
        front = rear=-1;
    }
    else{
        front = (front+1)%MAX;
        printf("Element dequeued successfully\n");
        }
}
int Display()
{
    int i;
    printf("Queue is :\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int ch;
    printf("Circular Implementation of queue using arrays.\n\n\n");
    IsEmpty();
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



