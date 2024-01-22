#include<stdio.h>
int main()
{
    int arr[5] = {3,5,2,0,1};
    printf("Unsorted array:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    // insertion sort
    for(int i=0; i<5; i++)
    {
        int j = i;
        while(j>=1 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
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