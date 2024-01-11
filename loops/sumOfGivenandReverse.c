#include<stdio.h>
int main()
{
    int n,rem,rev=0,sum;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp=n;
    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    sum=n+rev;
    printf("Sum of given number and its reverse is %d",sum);
    return 0;
}