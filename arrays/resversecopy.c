#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int brr[7];
    for(int i=0;i<7;i++)
    {
        brr[i]=arr[6-i];             // brr[i] = [6th index - i]
    }
    for(int i=0;i<7;i++)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}