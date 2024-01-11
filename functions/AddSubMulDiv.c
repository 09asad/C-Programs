#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int subtract(int a, int b)
{
    return a-b;
}
float mul(float a, float b)
{
    return a*b;
}
float div(float a, float b)
{
    return a/b;
}
void main()
{
    int x,y;
    printf("Enter the two number ");
    scanf("%d%d",&x,&y);
    int add=sum(x,y);                 // calling sum func   //declare different name from func
    printf("The sum is %d \n",add);
    int minus=subtract(x,y);             // calling subtract func
    printf("The difference is %d \n",minus);
    float product=mul(x,y);                 // calling mul func
    printf("The product is %f \n",product);
    float divide=div(x,y);                    // calling div func
    printf("The quotient is %f \n",divide);
}