#include<stdio.h>
int main()
{
    int arr[5] = {5,4,3,2,1};           // n = 5
    printf("Unsorted array:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    // bubble sort
    for(int i=0; i<4; i++)            // outer loop for no. of passes
    {                                //  max. (n-1) passes i.e. 4 passes in this case
        for(int j=0; j<4-i; j++)         // inner loop for swapping
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    printf("Sorted array:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}