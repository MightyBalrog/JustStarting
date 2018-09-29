#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;//pointer to node ,store the address of the first node in the linked list

void Insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp ->data = x;
    temp ->next = head;
    head = temp;//now head will point to temp instead of NULL

}
void Print(){
    struct Node* temp = head;//global var has the address of th0e head node
    printf("List is : ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
   head = NULL; //empty list
   int n,i,x;
   printf("How many numbers?\n");
   scanf("%d",&n);
   for(i=0;i<n;i++){
        printf("Enter the number \n");
        scanf("%d",&x);
        Insert(x); //inserting x into linked list by calling to a method called Insert
        Print();
   }


}
