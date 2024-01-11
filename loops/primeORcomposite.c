#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if(n==1) printf("1 is neither prime nor composite");
    else if(a==0) printf("the given number is prime");
    else printf("the given number is composite");
}