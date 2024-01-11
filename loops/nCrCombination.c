#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    int nFact=1;    //n!
    int rFact=1;    //r!
    int nrFact=1;   //(n-r)!

    for(int i=2;i<=n;i++)
    {
        nFact=nFact*i;
    }
    for(int i=2;i<=r;i++)
    {
        rFact=rFact*i;
    }
    for(int i=2;i<=n-r;i++)
    {
        nrFact=nrFact*i;
    }
    int nCr = nFact/(rFact*nrFact);
    printf("%d",nCr);
    return 0;
}