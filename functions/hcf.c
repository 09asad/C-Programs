#include<stdio.h>
int min(int a, int b)
{
    if(a<b)  return a;            // return to gcd
    else  return b;
}
int gcd(int a, int b)
    {
        int hcf;
        for(int i=1;i<=min(a,b);i++)        // calling min function
        {
            if(a%i==0 && b%i==0)
            {
                hcf = i;
            }
        }
        return hcf;        
    }
int main()
{
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int hcf = gcd(a,b);                                     // calling gcd function
    printf("The HCF/GCD of %d and %d is: %d",a,b,hcf);
}