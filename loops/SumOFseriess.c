#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
                         // 1-2+3-4+5-6+.......n terms
                         // odd numbers -> add
                         // even numbers -> subtract
    int sum=0;
    if(n%2==0)
    {
        sum= -n/2;
    }
    else
    {
        sum= -n/2 + n;
    }
    printf("The sum is: %d",sum);
    return 0;
}