#include <stdio.h>
int main()
{
    int arr[]={6,3,5,4,1,2};
    int size=6;
    for(int i=1;i<size;i++)
    {
        int j=i;
        while(arr[j]<arr[j-1])    // change > to < for increasing orders
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;       
            j--;
            if(j==0)
            {
                break;
            }
        }
    }
    printf("%d %d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);
    return 0;
}
// worst case time complexity = O(n^2)
// best case O(n)
// stable