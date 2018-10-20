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
    newnode ->next = NULL;
    newnode ->data = x;
    newnode ->prev = NULL;
    return newnode;
};

void Insert(int x)
{
    struct Node* newnode = getnode(x);

    if(head == NULL)
    {
       head = newnode;
       return;
    }
    head ->prev = newnode;//already existing node ka prev point karega newnode k taraf
    newnode->next = head;//sirf itna hi nahi,new node k next mein bhi already existing list ka address reflect karna chahiye
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
void Reverse()
{
    struct Node* temp = head;
    if(temp == NULL)
        return;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    printf("Reverse List:");
    while(temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->prev;
    }
    printf("\n");

}

void main()
{
    head=NULL;
    int i,x,n;
    printf("How many linked lists?\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("ENter the numbers to be inserted at the head:\n");
        scanf("%d",&x);
        Insert(x);
        Print();
        Reverse();
    }
}



