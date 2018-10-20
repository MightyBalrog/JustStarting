#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void Delete(n)
{

    struct Node* temp1 = head;
    if(n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<n-2;i++)
    {
        temp1 = temp1->next;//n-1

    }
    struct Node* temp2 = temp1->next;//n
    temp1->next = temp2->next;
    free(temp2);

}

void Insert(int n)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = n;
    temp->next = head;
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
    head = NULL;
    int n;
    Insert(2);
    Insert(5);
    Insert(6);
    Insert(7);
    Print();
    printf("\nEnter the position:\n");
    scanf("%d",&n);
    Delete(n);
    printf("\nThe new list is:\n");
    Print();
}
