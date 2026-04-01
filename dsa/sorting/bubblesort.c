#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[] = {19, 11, 30, 34, 10, 5, 6};
    int n = 7;
    
    for (int i = 1; i < n; i++)
    {   bool flag =false;
        int j = 1;
        while (j <= n - i)
        {
            if (arr[j - 1] > arr[j])        // change > to < for descending order
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                flag = true;
            }
            j++;
        }
        if(flag == false)
        {
            break;
        }
    }
    printf("%d %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6]);

    return 0;
}
// worst case complexity =O(n^2)
// best case =O(n);
// space complexity =O(1)
// Stable sorting (relative position of equal entries does not change)