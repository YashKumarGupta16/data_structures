#include <stdio.h>
int fibo(n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    int choti=fibo(n-1)+fibo(n-2);
    int badi=choti;
    return badi;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int ans=fibo(n);
    printf("%d ",ans);
    return 0;
}