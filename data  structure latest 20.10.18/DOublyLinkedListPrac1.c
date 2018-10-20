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
    newnode->data = x;
    newnode->next =NULL;
    newnode->prev =NULL;
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
    head ->prev = newnode;
    newnode->next = head;
    head = newnode;
}
void Print()
{
    struct Node* temp = head;
    printf("Forward list:");
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
    while(temp->next != NULL)//traversing the list till last//temp->next likhna zaruri hai
    {
        temp = temp->next;//ye humlog last tak gaye taaki peeche se print karwa sake
    }
    printf("Reverse list: ");
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
    InsertAtHead(3);Print();ReversePrint();
    InsertAtHead(4);Print();ReversePrint();
    InsertAtHead(5);Print();ReversePrint();
    InsertAtHead(6);Print();ReversePrint();
    InsertAtHead(7);Print();ReversePrint();


}
