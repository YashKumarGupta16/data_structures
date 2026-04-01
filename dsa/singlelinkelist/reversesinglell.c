#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void printdata(struct node* head)
{
    struct node* ptr=head;

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }

    return;
}
struct node* reversenode(struct node* head)
{
    struct node* previousnode,*currentnode,*nextnode;
    previousnode=NULL;
    currentnode=head;
    nextnode=head;

    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=previousnode;
        previousnode=currentnode;
        currentnode=nextnode;
    }
    head=previousnode;
    return head;
}
int main()
{
    struct node* head =(struct node*)malloc(sizeof(struct node));
    (*head).data=45;
    head->next=NULL;


    struct node* current=(struct node*)malloc(sizeof(struct node));
    head->next=current;
    current->data=65;
    current->next=NULL;

    
    current =(struct node*)malloc(sizeof(struct node));
    current->data=75;
    head->next->next=current;
    current->next=NULL;

    current=(struct node*)malloc(sizeof(struct node));
    current->data=85;
    head->next->next->next=current;
    current->next=NULL;

    head = reversenode(head);

    printdata(head);

    return 0;
}