#include<stdio.h>
int main()
{
    int arr[10],n,i,search,first,last,middle;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);            // In Binary, array should be sorted 
    }
    printf("Enter element to be search\n");
    scanf("%d",&search);
    first = 0;
    last = n-1;
    middle = (first + last)/2;
    while(first <= last)
    {
        if(arr[middle] < search)
        {
            first = middle + 1;
            middle = (first + last)/2;
        }
        else if(arr[middle] == search)
        {
            printf("The number, %d is found at position %d",search,middle+1);
            break;
        }
        else
        {
            last = middle - 1;
            middle = (first + last)/2;
        }
    }
    if(first > last)
    printf("\n The number, %d is not found in given array",search);
    return 0;
}