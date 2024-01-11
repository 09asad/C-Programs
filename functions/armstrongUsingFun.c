#include<stdio.h>
int armstrong(int x)
{
 int rem;
 int temp=x;               // temporary variable
    int sum=0;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(sum==x)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong");
    } 
    return sum;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int arm=armstrong(n);
    printf("%d\n",arm);
    return 0;
}