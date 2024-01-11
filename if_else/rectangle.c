#include<stdio.h>
int main()
{
    int l;
    printf("Enter length: ");
    scanf("%d",&l);
    int b;
    printf("Enter breadth: ");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p)
    {
        printf("area is graeter then perimeter");
    }
    else
    {
        printf("perimeter is graeter then area");
    }
}