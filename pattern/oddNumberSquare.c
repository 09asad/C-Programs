#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows and columns: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)         // no. of lines/rows -> i
    {
        for(int j=1;j<=2*n-1;j=j+2)     // no. of columns -> j
        {
            printf("%d ",j);          
        }
        printf("\n");
    }
    return 0;
}

            // we can also use temporary variable for this code
            // for(int i=1;i<=n;i++)
            // int a=1;
            // for(int j=1;j<=n;j++)
            // printf("%d",a);
            // a=a+2;