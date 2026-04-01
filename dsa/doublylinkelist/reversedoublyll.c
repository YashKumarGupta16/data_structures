#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node* next;
};
struct node* reverse(struct node* head,struct node* tail)
{
    struct node* currentnode=head;
    struct node* nextnode;
    while(currentnode!=NULL)
    {
        nextnode=currentnode->next;
        currentnode->next=currentnode->prev;
        currentnode->prev=nextnode;
        currentnode=nextnode;
    }
    currentnode=tail;
    tail=head;
    head=currentnode;
    return head;
}
struct node* add_at_end(struct node* temp,int key)
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    temp->next=new_node;
    new_node->data=key;
    new_node->prev=temp;
    new_node->next=NULL;
    return new_node;
}
struct node* createnode(struct node* head,int n)
{
    head->prev=NULL;
    printf("Enter first data: ");
    scanf("%d",&head->data);
    head->next=NULL;

    if(n>1)
    {   struct node* temp=head;
        
        for(int i=2;i<=n;i++)
        {   int key;
            printf("Enter the data of node %d ",i);
            scanf("%d",&key);
           temp= add_at_end(temp,key);
        }
    }
    return head;
}
int main()
{   int n;
printf("Enter the number of nodes: ");
scanf("%d",&n);
    struct node* head=(struct node*)malloc(sizeof(struct node));
    createnode(head,n);

    struct node* ptr=head;
    printf("linked list: \n");

    while(ptr->next!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
    struct node* tail=ptr;
    head = reverse(head,tail);

    printf("\n linked list after reversal: \n");
    struct node* gtr=head;
    while(gtr!=NULL)
    {
        printf("%d ",gtr->data);
        gtr=gtr->next;
    }
    return 0;
}