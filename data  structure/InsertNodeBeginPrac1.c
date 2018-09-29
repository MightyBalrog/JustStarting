#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void Delete(pos)
{

    struct Node* temp1 = head;
    if(pos == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<pos-2;i++)
    {
        temp1 = temp1->next;//n-1

    }
    struct Node* temp2 = temp1->next;//n
    temp1->next = temp2->next;
    free(temp2);

}

void Insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print()
{
    struct Node* temp = head;
    printf("List is:\n");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    int i,n,x,pos;
    printf("how many numbers?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number:\n");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    printf("Enter the position:\n");
    scanf("%d",&pos);
    Delete(pos);
    Print();

}
