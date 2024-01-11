#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=2;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r)
{
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)   // for spaces
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            int iCk = combination(i,k);     // calling combination function
            printf("%d ",iCk);
        }
        printf("\n");
    }
    return 0;
}