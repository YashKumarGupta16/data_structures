#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void delete_nth_node(struct node* head,int n)
{
    struct node* ptr1=head;
    struct node* ptr2=head->next;
    for(int i=1;i<n-1;i++)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr1->next=ptr2->next;
    free(ptr2);
   

    
    return;
}
int main()
{   int n;
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

    printf("Enter the node you want to delete: ");
    scanf("%d ",&n);
    delete_nth_node(head,n);

    struct node* gtr=head;
    while(gtr!=NULL)
    {
        printf("%d ",gtr->data);
        gtr=gtr->next;
    }
    return 0;
}