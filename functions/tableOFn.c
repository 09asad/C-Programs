#include<stdio.h>
void table(int x)
{
    int i;
    for(i=x;i<=10*x;i=i+x)
    {
        printf("%d\n",i);
    }
    return;               // only return; in void case NO return i or something like that
}
int main()
{
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    table(n);
    return 0;
}