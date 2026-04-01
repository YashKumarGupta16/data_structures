// recursion tree
#include <stdio.h>
int stair(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    int choti=stair(n-1)+stair(n-2);
    return choti;
}
int main()
{
    int n;
    printf("Enter the number of stair upto which you want to climb from 0th stair: ");
    scanf("%d",&n);
    int ans=stair(n);
    printf("The number of ways to climb nth stair is %d ",ans);
    return 0;
}