// insert node of data 35 in the beginning of single ll
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insert_at_beginning(struct node* head,int key)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=key;
    ptr->next=head;
    head=ptr;     //head is updated locally not in main fxn becuse it was passed by value
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return ;       // we can return head in order to reflect changes in the main fxn also change in line 36
}
int main()
{   int key;

    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;

    struct node* current=(struct node*)malloc(sizeof(struct node));
    current->data=55;
    current->next=NULL;
    head->next=current;
    
    printf("Enter the node data to be added in the beginning: ");
    scanf("%d",&key);
    
    /* head= */  insert_at_beginning(head,key); //in order to reflect change in head
    
    printf("\n%d",head->data);      // head is still pointing to 45
    return 0;
}
// time complexity is O(1) and in array is O(n)