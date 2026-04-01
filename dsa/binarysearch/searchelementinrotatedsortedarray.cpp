#include <iostream>
using namespace std;
int searchelement(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    int m = 0;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            cout << key << " key is present in the array with index " << mid;
            return 0;
            m = 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    if (m == 0)
    {
        cout << key << " key is not present in the array";
    }
    return mid;
}
int pivotelement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] > arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}
int main()
{
    int arr[] = {7, 8, 10, 1, 2, 3 , 5 ,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int p = pivotelement(arr, size);
    int key = 7;
    int start, end;
    if (key >= arr[0])
    {
        start = 0;
        end = p - 1;
    }
    else
    {
        start = p;
        end = size - 1;
    }
    searchelement(arr, start, end, key);
    return 0;
}