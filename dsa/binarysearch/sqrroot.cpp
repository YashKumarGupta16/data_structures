#include <iostream>
using namespace std;
int main()
{
    int n,ans;
    cout << "Enter the number: ";
    cin >> n;
    int start =1;
    int end= n;
    long long int mid =start + (end-start)/2;
    while(start <= end)
    {
        if(mid*mid == n)
        {
            ans =mid;
            break;
        }
        if(mid*mid > n)
        {
            end = mid-1;
        }
        if(mid*mid < n)
        {
           
            start =mid+1;
        }
        mid =start + (end-start)/2;
    }
    cout << ans;
    return 0;
}
