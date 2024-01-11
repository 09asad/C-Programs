#include<stdio.h>
int maze(int cr, int cc, int er, int ec)           // cr & er = current & ending row
{                                                  // cc & ec = current & ending column
    int rightWays=0;
    int downWays=0; 
    if(cr==er && cc==ec) return 1;
    if(cr==er)
    {
        rightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec)
    {
        downWays += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec)
    {
        rightWays += maze(cr,cc+1,er,ec);
        downWays += maze(cr+1,cc,er,ec);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main()
{
    int n;                                      // no of rows
    printf("Enter no of rows of the maze: ");
    scanf("%d",&n);
    int m;                                      // no of columns
    printf("Enter no of columns of the maze: ");
    scanf("%d",&m);
    int noOfWays = maze(1,1,n,m);             //starts from (1,1)
    printf("%d",noOfWays);
    return 0;
}