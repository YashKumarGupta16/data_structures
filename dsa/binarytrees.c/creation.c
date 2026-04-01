#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int x)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node* buildtree(struct node* root)
{
    int data;
    printf("Enter data: ");
    scanf("%d",&data);
    if(data==-1)
    {
        return NULL;
    }
    root = createnode(data);
    printf("Enter data for left: ");
    root->left= buildtree(root->left);
    printf("Enter data for right: ");
    root->right= buildtree(root->right);
    return root;
}
void in(struct node * root){
    if(root==NULL){
        return;
    }
    in(root->left);
    printf("%d",root->data);
    in(root->right);
    return;
}
int main()
{
    struct node* root = NULL;
    buildtree(root);
    in(root);
    return 0;
}