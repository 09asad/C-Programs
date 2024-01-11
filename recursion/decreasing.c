#include<stdio.h>
void decreasing(int x)
{
    if(x==0)  return;
    printf("%d\n",x);
    decreasing(x-1);
    return;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    decreasing (n);          //call decreasing fun wihtout int bcz of void
    return 0;
}