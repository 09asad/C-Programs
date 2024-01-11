#include<stdio.h>
int main()
{
    int n,i,a=4;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d, ",a);
        a=a+3;
    }
}