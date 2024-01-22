#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[5] = {1,2,3,4,5};           // n = 5
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    // bubble sort
    for(int i=0; i<4; i++)
    {
        bool flag = true;            // array is already sorted
        for(int j=0; j<4-i; j++)   
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true)  break; 
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}