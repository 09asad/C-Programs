#include<stdio.h>
int main()
{
    int arr[5] = {3,2,5,1,4};           // n = 5
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i=0; i<4; i++)     
    {   
        for(int j=0; j<4-i; j++)   
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
    for(int i=4; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}