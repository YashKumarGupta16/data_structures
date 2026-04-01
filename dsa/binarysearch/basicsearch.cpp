// #include <iostream>
// using namespace std;
// int searchelement(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end-start)/2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             cout << key << " is present in the array with index :- " << mid;
//             return 0;
//         }
//         if (arr[mid] < key)
//         {
//             start=mid+1;
//         }
//         if (arr[mid] > key)
//         {
//             end=mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     cout << key << " is not present in the array";
//     return 0;
// }
// int main()
// {
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     int arr[20];
//     cout << "Elements in the Array should be in increasing format."<< endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter the element " << i + 1 << ":- ";
//         cin >> arr[i];
//     }
//     int key;
//     cout << "Enter the element you want to search: ";
//     cin >> key;
//     searchelement(arr, size, key);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int N,K;
        cin >> N >> K;
        vector<int> A(N);
        vector<int> B(N);
        for(int i=0;i<N;i++)
        {
            cin >> A[i] >> B[i];
        }
        int diff=0;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            if(A[i]>=B[i])
            diff = min(abs(A[i] - B[i]), abs(9 - A[i] + B[i]));
            else{
                diff =  min(abs(A[i] - B[i]), abs(9 - B[i] + A[i]));
            }

            sum+=diff;
        }
        if(sum>K)
        {
            cout << "no" <<endl;
        }
        else if(sum==K)
        {
            cout << "yes" <<endl;
        }
        else{
            int a = K-sum;
           if(a%2==0)
           {
               cout << "yes" << endl;
           }else if((a%9)%2==0){
               cout << "yes " << endl;
           }
           else{
               cout << "no" <<endl;
           }
        }
    }
}
