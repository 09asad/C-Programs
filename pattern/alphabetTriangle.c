#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows and columns: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            int d=a+64;       // d=65
            char ch = (char)d;   //typeCasting
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}