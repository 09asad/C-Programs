#include<stdio.h>
void increasing(int x)
{
    if(x==0)  return;      // base case
    increasing(x-1);       // call
    printf("%d\n",x);      // code
    return;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    increasing (n);         
    return 0;
}