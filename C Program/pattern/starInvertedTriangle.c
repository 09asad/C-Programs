#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int a=n;                   // a=temporary variable
    for(int i=1;i<=n;i++)         // no. of lines/rows -> i
    {
        for(int j=1;j<=a;j++)     // no. of columns -> j
        {
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
}