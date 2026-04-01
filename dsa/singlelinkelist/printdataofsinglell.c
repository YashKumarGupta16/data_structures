#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void print(struct node* head)
{   struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
   
    return;
}
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;

    struct node* current=(struct node*)malloc(sizeof(struct node));
    current->data=55;
    current->next=NULL;
    head->next=current;

    current=malloc(sizeof(struct node));
    current->data=65;
    current->next=NULL;
    head->next->next=current;

    print(head);
    return 0;
}
// time complexity is O(n)