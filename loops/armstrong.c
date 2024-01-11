#include<stdio.h>
int main()
{
    int n,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp=n;               // temporary variable
    int sum=0;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}