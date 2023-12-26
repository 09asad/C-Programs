#include<stdio.h>
int main()
{
    int cp;
    printf("Enter the cost price: ");
    scanf("%d",&cp);
    int sp;
    printf("Enter the selling price: ");
    scanf("%d",&sp);
    if(sp>cp)
    {
        printf("Profit");
    }
    if(cp>sp)
    {
        printf("Loss");
    }
    if(sp==cp)
    {
        printf("No profit, No loss");
    }
    return 0;
}