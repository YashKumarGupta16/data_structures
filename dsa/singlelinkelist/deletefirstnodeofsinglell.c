#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* deletefirstnode(struct node* head)
{
    struct node* ptr=head;
    head=head->next;
    free(ptr);
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

    head=deletefirstnode(head);
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
