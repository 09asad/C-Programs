#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows/columns: ");
    scanf("%d",&n);
    int arr[n][n];   
    printf("Enter all the elements\n");             // only for square matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);   
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)           // j --> i to n-1
        {
            int temp = arr[i][j];             //swap arr[i][j] and arr[j][i]
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}