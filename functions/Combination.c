#include<stdio.h>
int factorial(int x)      //1st x=n //2nd x=r  //3rd x=n-r
{
    int fact=1;
    for(int i=2;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;          //return to nCr
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    int nFact=factorial(n);           //n!       // calling factorial function 
    int rFact=factorial(r);          //r!
    int nrFact=factorial(n-r);      //(n-r)!

    int nCr = nFact/(rFact*nrFact);
    printf("%d",nCr);
    return 0;
}