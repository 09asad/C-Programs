#include<stdio.h>
int main()
{
    int n,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp=n;               // temporary variable
    int rev=0;
    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==n)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}