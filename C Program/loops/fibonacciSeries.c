#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    int a=0,b=1,sum=0;
    for(int i=1;i<n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
       printf("%d, ",sum);
    }
    return 0;
}    