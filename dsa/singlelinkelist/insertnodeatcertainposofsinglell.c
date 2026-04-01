// insert a node at 3rd position
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insert(struct node* head,int key,int position)
{   struct node* new=(struct node* )malloc(sizeof(struct node));
    new->data=key;
    new->next=NULL;

    struct node* x= head;
    
    for(int i=0;i<position-2;i++)
    {
        x=x->next;
        
    }
    if(position==1)
    {
        new->next=x;
        head=new;
    }
    else
   { new->next=x->next;
    x->next=new;  }
    
    struct node* ptr=head;
     while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return ;
}
int main()
{   int key,position;
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

    printf("enter the data and the position to insert: ");
    scanf("%d %d ",&key,&position);

    insert(head,key,position);
  
    
    return 0;
}
//timw comp=O(n);    in case of array also O(n)