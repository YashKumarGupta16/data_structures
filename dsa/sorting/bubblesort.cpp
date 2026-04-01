#include <iostream>
using namespace std;
int main()
{   int size;
    cout << "Enter the size: ";
    cin >> size;
    int arr[20];
    cout << "Enter the elements: ";
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    bool swapped = true;
    for(int i=0;i<size-1;i++)
    {
        int p=0;
        int q=1;
        while(q<size-i)
        {
            if(arr[p]>arr[q])
            {
                int m =arr[p];
                arr[p]=arr[q];
                arr[q]=m;
                swapped =false;
            }
            p++;
            q++;
        }
        if(swapped == true)
        {
            break;
        } 
    }
    cout << "The sorted array is: ";
    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}