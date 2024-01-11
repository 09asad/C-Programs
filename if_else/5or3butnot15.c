#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            printf("Divisible by 5 or 3 but not 15");
        }
        else
        {
            printf("Number is divisible by 15");
        }
    }
    else
    {
        printf("Number is not divisible by 5 and 3");
    }
    return 0;
}