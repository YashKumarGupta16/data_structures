#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
struct node* push(int x)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    return top;
    }
struct node* pop()
{
    struct node* temp=top;
    top=top->next;
    free(temp);
    return top;
}
int main()
{
    push(2);
    push(3);
    push(4);
    push(7);
    pop();
    pop();
    struct node* head=top;
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}
