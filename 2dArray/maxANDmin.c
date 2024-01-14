#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3] = {{3,4,2},{5,6,7},{4,9,8}};
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if(min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
    printf("(%d,%d)\n",max,min);
    return 0;
}