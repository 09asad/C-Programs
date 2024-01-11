#include<stdio.h>
int stair(int n)
{
    if(n==1 || n==2 ) return n;                   //single, double and triple step allowed
    if(n==3)  return n+1;
    int totalWays = stair(n-1) + stair(n-2) + stair(n-3);       
    return totalWays;
}
int main()
{
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);
    return 0;
}    