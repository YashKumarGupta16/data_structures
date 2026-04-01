#include <stdio.h>
int main()
{
    int arr[]={3,64,12,10,5,7,23};
    int size=7;
    int min,p;
    for(int i=0;i<size-1;i++)
    {   min =arr[i];
         p=i;
        for(int j=i+1;j<size;j++)
        {
            if( arr[j] < min )
            {
                min =arr[j];
                p=j;
            }
        }
      int temp=arr[p];
      arr[p]=arr[i];
      arr[i]  =temp;
        
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
// time complexity is always O(n^2) (best case as well as worst case)
// not stable
// advantage of selection sort over bubble sort is that it takes O(n) swaps rather than O(n^2) swaps