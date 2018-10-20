#include<stdio.h>
#include<stdlib.h>

struct BstNode{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};
struct BstNode* root=NULL;

struct BstNode* getnewnode(int data)
{
    struct BstNode* newnode = (struct BstNode*)malloc(sizeof(struct BstNode));
    newnode->data = data;
    newnode->left = newnode->right= NULL;
    return newnode;
}
struct BstNode* Insert(struct BstNode* root,int data)
{
    if(root == NULL)
    {
        getnewnode(data);
    }
    else if(data <= root->data)
    {
        root->left = Insert(root->left,data);
    }
    else
    {
        root->right = Insert(root->right,data);
    }
    return root;
}
void Print(struct BstNode *root)
{

    if (root == NULL)
        return;
    Print(root->left);

    Print(root->right);

    printf("%d ",root->data);
        /*
    struct BstNode* temp = root;
    printf("Binary tree is:\n");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp= temp->right;

    }
    printf("\n");
    */

}

int main()
{
    struct BstNode * root = NULL;
    Insert(root,15);
    Insert(root,10);
    Insert(root,20);
    printf("Inorder traversal:\n");
    Print(root);
}
