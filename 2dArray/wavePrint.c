#include<stdio.h>
int main()
{
    // Matrix order
    int m;
    printf("Enter no of row: ");
    scanf("%d",&m);
    int n;
    printf("Enter no of column: ");
    scanf("%d",&n);
    int a[m][n];
    // Input matrix
    printf("Enter elements of the matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // wave print
    printf("The resultant matrix is \n");
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
        else
        {
            for(int j=n-1;j>=0;j--)         // reverse code
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}