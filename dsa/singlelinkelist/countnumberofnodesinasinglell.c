#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void count_nodes(struct node* head)
{ int count=0;
     if(head==NULL)
    {
        printf("Linked list is empty");
    }
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    printf("%d",count);
    return;
}
int main()
{   
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=34;
    head->next=NULL;

    struct node* current=(struct node*)malloc(sizeof(struct node*));
    current->data=36;
    current->next=NULL;
    head->next=current;

    current = (struct node*)malloc(sizeof(struct node*));
    current->data=45;
    current->next=NULL;
    head->next->next=current;

    count_nodes(head);
    return 0;
}
// time complexity is O(n)