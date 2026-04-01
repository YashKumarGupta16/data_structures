#include <iostream>
using namespace std;
int main()
{
    int arr[]={7,8,9,1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    int mid =start + (end-start)/2;
    while(start<end)
    {
        if(arr[mid]>arr[0])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid =start + (end-start)/2;
    }
    cout << "pivoted element is "<< arr[mid];
    return 0;
}