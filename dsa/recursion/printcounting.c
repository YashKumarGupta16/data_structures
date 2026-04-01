#include <stdio.h>
void print(int n)
{
    if(n==0)
    {
        return ;
    }
    printf("%d ",n);
    print(n-1);
    // printf("%d ",n);  if print 1 to n
    return;
}
int main()
{
    int n;
     printf("Enter n: ");
    scanf("%d ",&n);
    print(n);
    return 0;
}