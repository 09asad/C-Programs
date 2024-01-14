#include<stdio.h>
void reverse(int arr[],int si,int ei)         // si & ei = starting & ending index
{
    for(int i=si,j=ei;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr,2,5);                     // reverse index 2 to 5 using function
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}