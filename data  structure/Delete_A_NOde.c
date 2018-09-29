#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Delete(int n)
{
    int i;
    struct Node* temp1 = head;
    if(n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    for(i=0;i<n-2;i++)
    {
        temp1 = temp1->next;//we are reaching n-1th with help of loop
    }
        struct Node* temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
}

void Insert(int n)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp ->data=n;
    temp->next=head;
    head=temp;
    /*
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = n;
    temp1->next = NULL;
    temp2 = head;
    if(head == NULL)
    {
        head = temp1;
    }
    else
    {
      while(temp2->next!=NULL)
      {
          temp2 = temp2->next;
      }
      temp1->next = temp2->next;
      temp2->next=temp1;
    }
    */
}
void Print()
{

    struct Node* temp = head;
    printf("\n");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp-> next;
    }
}
int main()
{
    head = NULL;
    int n;
    Insert(2);
    Insert(5);
    Insert(8);
    Insert(10);
    Print();
    printf("Enter the number to delete:\n");
    scanf("%d",&n);
    Delete(n);
    Print();
}
