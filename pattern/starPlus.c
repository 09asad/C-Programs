#include<stdio.h>
int main()
{
    int n;                            // n=odd
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)          // no. of lines/rows = i
    {
        for(int j=1;j<=n;j++)      // no. of columns = j
        {
            int a = n/2+1;                   
            if(j==a || i==a)  printf("*");
            else  printf(" ");               //print space
        }
        printf("\n");
    }
    return 0;
}