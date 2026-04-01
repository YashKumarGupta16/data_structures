#include <stdio.h>
#include <stdlib.h>
int maxsize = 5;
int stack[5] ;
int top=-1;
void push(int x)
{   if(top==maxsize-1)
     {
        printf("stack overflow\n");
        return;
     }   
    top++;
    stack[top] = x;
    return;
}
void pop()
{   if(top==-1)
{
    printf("stack empty\n");
    return;
}
    top--;
    return;
}
void peek()
{
    printf("%d\n",stack[top]);
    return;
}
void isempty()
{
    if(top==-1)
    {
        printf("stack empty\n");
    }
    else{
        printf("stack not empty\n");
    }
    return;
}
int main()
{
    push(3);
    push(7);
    push(10);
    pop();
    peek();
    push(11);
    peek();
    pop();
    isempty();
    pop();
    pop();
    isempty();
    pop();
    push(3);
    push(3);
    push(3);
    push(3);
    push(3);
    push(3);
}


