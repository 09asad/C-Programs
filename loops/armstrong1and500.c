#include <stdio.h>
int main()
{
    int n, rem;
    for (n=1; n<=500; n++)
    {
        int temp = n;
        int sum = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        if (sum == n)
        {
            printf("%d, ", n);
        }
    }
}