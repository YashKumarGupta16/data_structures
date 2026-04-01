#include <stdio.h>
int main()
{
    int arr1[4]={1,3,4,6};
    int arr2[3]={2,5,7};
    int arr3[7];
    int i=0;
    int j=0;
    int k=0;
    while(i<4 && j<3)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<4)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<3)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}