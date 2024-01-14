#include <stdio.h>

int rectangle_sum(int a[][100], int n, int m, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i=l1; i<=l2; i++)
    {
        for (int j=r1; j<=r2; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}

int main()
{
    int n, m, l1, r1, l2, r2;
    int a[100][100];                     // Matrix with a maximum size of 100x100
    printf("Enter matrix dimensions (n x m): ");
    scanf("%d %d", &n, &m);

    printf("Enter coordinates of the rectangle (l1, r1, l2, r2): ");
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    printf("Enter matrix elements:\n");           
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int result = rectangle_sum(a, n, m, l1, r1, l2, r2);
    printf("Sum of the rectangle: %d\n", result);

    return 0;
}
