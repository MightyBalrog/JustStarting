#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void Delete(int x)
{
    struct Node* temp = head;
    if(x == 1)
    {
        head = temp->next;
        free(temp);
        return;
    }
    int i;
    for(i=0;i<x-2;i++)
    {
        temp = temp->next;
    }

    struct Node* temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
}

void Insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp ->data = x;
    temp ->next = head;
    head = temp;
}
void Print()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    int x;
    Insert(2);
    Insert(5);
    Insert(4);
    Insert(9);
    Print();
    printf("\nEnter the postiton:\n");
    scanf("%d",&x);
    Delete(x);
    Print();
}
