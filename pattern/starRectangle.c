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
        for(int i=1;i<=m;i++)   // inner loop -> no of stars in each line/columns
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}