#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
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

    struct node* temp=head;
    while(temp!=NULL)
    {   temp=temp->next;
        free(head);
        head=temp;
    }
    if(head==NULL)
    {
        printf("sll is empty");
    }
    return 0;
}