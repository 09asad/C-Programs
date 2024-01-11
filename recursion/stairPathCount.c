#include<stdio.h>
int stair(int n)
{
    if(n<=2) return n;                            //only single and double step allowed
    int totalWays = stair(n-1) + stair(n-2);       
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