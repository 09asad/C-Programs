#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter number of columns: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)       // outer loop -> no of lines/rows
    {
        for(int j=1;j<=m;j++)   // inner loop -> no of stars in each line/columns
        {
            if(i==1 || i==n)
            printf("*");
            else if(j==1 || j==m)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}