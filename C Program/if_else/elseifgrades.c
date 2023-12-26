#include<stdio.h>
int main()
{
    float n;
    printf("Enter the percentage: ");
    scanf("%f",&n);
    if(n>80)
    {
        printf("A grade");
    }
    else if(n>60)
    {
        printf("B grade");
    }
    else if(n>40)
    {
        printf("C grade");
    }
    else
    {
        printf("D grade");
    }
    return 0;
}