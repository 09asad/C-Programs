#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(rem%2==0)
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum of even digits are %d",sum);
    return 0;
}