#include<stdio.h>
int main()
{
    int arr[5];             // index = 0 to 4
    for(int i=0;i<=4;i++)        // i=0,1,2,3,4       // i<=4 or i<5
    {
        printf("Enter element %d: ",i+1);           // taking input using loop
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}