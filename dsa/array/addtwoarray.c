#include <stdio.h>
int main()
{
    int arr1[4]={2,3,6,1};
    int arr2[3]={3,1,0};
    int num1=0;
    int num2=0;
    for(int i=0;i<4;i++)
    {
    num1 = 10*num1 + arr1[i];
    }
    for(int j=0;j<3;j++)
    {
        num2 = 10*num2 + arr2[j];
    }
    int num3=num1+num2;
    int p=num3;
    int count=0;
    while(p>0)
    {
        
        p=p/10;
        count++;
    }
    int arr3[count];
    for(int k=count-1;k>=0;k--)
    {
        int r =num3%10;
        arr3[k]=r;
        num3=num3/10;
    }
    for(int m=0;m<count;m++)
    {
        printf("%d ",arr3[m]);
    }
    return 0;
}