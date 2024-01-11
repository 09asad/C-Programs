#include<stdio.h>
int main()
{
    int n;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(int j=1;j<=i;j++)
            printf("%d ",j);
        }
        else
        {
            for(int j=0;j<i;j++)
            printf("%c ", 'A'+j);
        }
        printf("\n");
    }
    return 0;
}