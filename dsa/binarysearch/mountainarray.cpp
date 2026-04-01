#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,-1,-3,-7};
    int size =sizeof(arr)/sizeof(arr[0]);
    
    int start=0;
    int end =size-1;
    int mid =start + (end-start)/2;
    while(start <=end )
    {
        if(arr[mid]<arr[mid+1] && mid+1<size)
        {
            start = mid+1;
        }
       else if(arr[mid-1]>arr[mid])
        {
            end=mid-1;
        }
        else {
            cout << arr[mid] << " is the peak of the mountain array";
            break;
        }
        mid =start + (end-start)/2;
    } 
    return 0;
}