#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int arr[n][2];              // 2-d array to store roll number and marks

    printf("Enter roll numbers and marks for each student:\n");
    for (int i=0; i<n; i++)
    {
        printf("Student %d\n",i+1);
        printf("Roll number: ");
        scanf("%d", &arr[i][0]);
        printf("Marks: ");
        scanf("%d", &arr[i][1]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
