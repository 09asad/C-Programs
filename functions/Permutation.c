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
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    int nFact=factorial(n);           //n!
    int nrFact=factorial(n-r);       //(n-r)!

    int nPr = nFact/nrFact;
    printf("%d",nPr);
    return 0;
}