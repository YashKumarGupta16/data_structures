//Add 67 at end in a single ll
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insertnode(int key,struct node* head)
{
    struct node* ptr=head;
    while(ptr -> next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    ptr -> next = temp;
    temp->data=key;
    temp->next=NULL;
    struct node* gtr=head;
    printf("%d\n ",ptr->next->data);
     while(gtr!=NULL)
     {
         printf("%d ",gtr->data);
         gtr=gtr->next;
     }
    return;
}
int main()
{   int key;
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=35;
    head->next=NULL;

    struct node* current=(struct node*)malloc(sizeof(struct node));
    current->data=45;
    current->next=NULL;
    head->next=current;

    current=malloc(sizeof(struct node));
    current->data=55;
    current->next=NULL;
    head->next->next=current;

    printf("Enter the node data to be added in end: ");
    scanf("%d",&key);
    insertnode(key,head);

   printf("\n%d ",head->next->next->next->data);
    return 0;
}
//time complexity is O(n)...can be reduced to O(1) by adding nodes 1 by 1.