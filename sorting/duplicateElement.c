#include<stdio.h>
int main()
{
    int arr[11]={6,1,7,3,2,5,4,8,9,5,10};
    int sum1 = 0;
    for(int i=0;i<11;i++)
    {
        sum1 = sum1 + arr[i];
    }
    printf("%d\n",sum1);

    int sum2 = 0;
    int n = 10;
    sum2 = (n*n + n)/2;            // n(n+1)/2  where n = no. of indexes in given array
    printf("%d\n",sum2);

    int result = sum1 - sum2;
    printf("%d is the duplicate element",result);
    return 0;
}