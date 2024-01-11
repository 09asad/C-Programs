#include<stdio.h>
int add(int x, int y)
{
    return x+y;         // result
}
int main()
{
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int sum = add(a,b);     //calling add func..  // add a == int x  and add b == int y
    printf("%d",sum);
    return 0;
}