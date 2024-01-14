#include <stdio.h>
int main()
{
    int rows, cols, max_sum = 0, max_row = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Find the row with maximum sum
    for (int i=0; i<rows; i++)
    {
        int row_sum = 0;
        for (int j=0; j<cols; j++)
        {
            row_sum += matrix[i][j];
        }
        printf("Sum in %dth row: %d\n",i, row_sum);

        if (row_sum > max_sum)
        {
            max_sum = row_sum;
            max_row = i;
        }
    }
    printf("Hence Row number with maximum sum: %d\n", max_row + 1);
    return 0;
}
