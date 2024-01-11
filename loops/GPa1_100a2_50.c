#include<stdio.h>
int main()
{
   float a=100;
   int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%f, ",a);
        a=a*1/2;
    }
}