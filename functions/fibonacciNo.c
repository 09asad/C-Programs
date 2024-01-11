#include<stdio.h>
int fibonacci(int x)
{
int a=0,b=1,sum=0;
    for(int i=1;i<x;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fib=fibonacci(n);
    printf("The %dth fibonacci number is %d",n,fib);
    return 0;
}    