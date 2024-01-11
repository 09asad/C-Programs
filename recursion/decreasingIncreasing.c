#include<stdio.h>
void decreasing(int x)
{
    if(x==0)  return;
    printf("%d\n",x);      //code
    decreasing(x-1);      //call
    printf("%d\n",x);    //code
    return;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    decreasing (n);          
    return 0;
}