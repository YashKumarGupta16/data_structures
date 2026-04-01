#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void deletelastnode(struct node* head)
{
    struct node* ptr=head;
    
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next=NULL;
   
  return;
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

   deletelastnode(head);
   struct node* ptr=head;
    
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }

        
    
    return 0;
}
//time comp=O(n);