#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=35;
    head->next=NULL;

    struct node* current=(struct node*)malloc(sizeof(struct node));
    current->data=45;
    current->next=NULL;
    head->next=current;

    current=(struct node*)malloc(sizeof(struct node));
    current->data=55;
    head->next->next=current;
    current->next=NULL;

    struct node* tail=(struct node*)malloc(sizeof(struct node));
    tail->data=65;
    head->next->next->next=tail;
    tail->next=head;
    int element;
    printf("enter data: ");
    scanf("%d",&element);
    struct node* temp=head;
    int index=0;
    int a=0;
    while(temp->next!=tail->next)
    {
        if(temp->data==element)
        {
            printf("index: %d",index);
            a=1;
            return 0;
        }
        index++;
        temp=temp->next;
    }
    if(temp->data==element)
    {
        printf("index: %d",index);
        return 0;
    }
    if(a==0)
    {
        printf("not present");
    }
    return 0;
}