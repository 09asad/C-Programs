#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[7] = {7,4,5,9,8,2,1};          // n = 7
    printf("Unsorted array:\n");
    for(int i=0; i<7; i++)
    {
        printf("%d ",arr[i]);
    }
    // selection sort
    for(int i=0; i<6; i++)         //  max. (n-1) passes i.e. 6 passes in this case
    {                             
        int min = INT_MAX;
        int minidx = -1;              // minidx = min index
        for(int j=i; j<=6; j++)  
        {
            if(min>arr[j])
            {
                min = arr[j];
                minidx = j;
            }
        }
        // swap the min and first element of unsorted part
        // swap minidx and i
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp; 
    }
    printf("\n");
    printf("Sorted array:\n");
    for(int i=0; i<7; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}