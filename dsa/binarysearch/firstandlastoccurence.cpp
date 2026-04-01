#include <iostream>
using namespace std;
int searchlastelement(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int last,a=0;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            last = mid;
            start = mid + 1;
            a=1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if (a==0)
    {
        return -1;
    }
    return last;
}
int searchfirstelement(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int first,a=0;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            first = mid;
            end = mid - 1;
            a=1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if (a==0)
    {
        return -1;
    }
    
    return first;
}
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[20];
    cout << "Elements in the Array should be in increasing format." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << i + 1 << ":- ";
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element : ";
    cin >> key;
    cout << "First occurence of " << key << " is " << searchfirstelement(arr, size, key) << endl;
    cout << "Last occurence of " << key << " is " << searchlastelement(arr, size, key) << endl;

    return 0;
}
