#include<stdio.h>
int fibo(int x)
{
    if(x<=2) return 1;
    return fibo(x-1) + fibo(x-2);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fib = fibo(n);
    printf("The %dth fibonacci number is %d",n,fib);
    return 0;
}    