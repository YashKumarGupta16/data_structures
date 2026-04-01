#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insert_begin(struct node* current2,int key)
{
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=key;
    new->next=NULL;
    new->next=current2->next;
    current2->next=new;
}
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=35;
    head->next=NULL;

    struct node* current =(struct node*)malloc(sizeof(struct node));
    current->data=45;
    current->next=NULL;
    head->next=current;

    struct node*current1 =(struct node*)malloc(sizeof(struct node));
    current1->data=55;
    current1->next=NULL;
    current->next=current1;

    struct node* current2 =(struct node*)malloc(sizeof(struct node));
    current2->data=65;
    current2->next=NULL;
    current1->next=current2;
    current2->next=head;

    int key=25;
    insert_begin(current2,key);
    return 0;
}