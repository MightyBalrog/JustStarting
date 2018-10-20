#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;

struct Node* getNode(int x)
{
     struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode ->data = x;
    newnode ->prev = NULL;
    newnode ->next = NULL;
    return newnode;
};

void InsertAtHead(int x)
{
   struct Node* newnode = getNode(x);

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
    printf("Forward: ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
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
    printf("Reverse :");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    InsertAtHead(2);Print();ReversePrint();
    InsertAtHead(4);Print();ReversePrint();
    InsertAtHead(8);Print();ReversePrint();
    InsertAtHead(9);Print();ReversePrint();
    InsertAtHead(12);Print();ReversePrint();

}
