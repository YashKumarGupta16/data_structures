#include <stdio.h>
int factorial(int x)
{   
    if(x==0)
    {
        return 1;
    }
    int choti=factorial(x-1);
    int badi= x* choti;
    return badi;                                                           
}
int main()
{   
    int x;
    printf("enter number: ");
    scanf("%d ",&x);
    int ans = factorial(x);
    printf("%d ",ans);
    return 0;
}