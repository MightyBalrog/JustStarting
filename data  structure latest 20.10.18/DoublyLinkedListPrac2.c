#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;
struct Node* getnode(int x)
{
   struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
   newnode ->data = x;
   newnode ->next = NULL;
   newnode ->prev = NULL;
   return newnode;
}
void InsertAtHead(int x)
{
    struct Node* newnode = getnode(x);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;

}
void Print()
{
    struct Node* temp = head;
    printf("Forward list:\n");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void ReversePrint()
{
    struct Node* temp = head;
    if(temp == NULL)
        return;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    printf("Reverse list:\n");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
}
void main()
{
    head = NULL;
    int n,x,i;
    printf("How many numbers?\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the number:\n");
        scanf("%d",&x);
        InsertAtHead(x);
        Print();
        ReversePrint();

    }
}

