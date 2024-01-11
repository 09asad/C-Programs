#include<stdio.h>
int main()
{
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int temp;                     // temporary variable
    temp=a;
    a=b;
    b=temp;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}