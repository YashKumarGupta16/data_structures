#include <iostream>
using namespace std;

int main()
{
    int arr[]={23,47,16,84,53,18,543,97,12};
    int size =sizeof(arr)/sizeof(arr[0]);
    int k,a;
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
       int temp =arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
            
        

    }
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}