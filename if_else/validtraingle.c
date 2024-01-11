#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first side: ");
    scanf("%d", &a);
    printf("Enter the second side: ");
    scanf("%d", &b);
    printf("Enter the third side: ");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
    return 0;
}