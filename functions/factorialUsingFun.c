#include<stdio.h>
int factorial(int x)
{
    int product=1;
   for(int i=1;i<=x;i++)
    {
        product=product*i;
    }
    return product;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("The factorial of %d is %d\n",n,fact);
    return 0;
}