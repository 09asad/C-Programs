#include<stdio.h>
void tower(int n, char s, char h, char d)        // s=souce=A   // h=helper=B   // d=destination=C
{
    if(n==0)  return;
    tower(n-1,s,d,h);                 // small pyramid  call
    printf("%c -> %c\n",s,d);
    tower(n-1,h,s,d);                 // again small pyramid call
    return;
}
int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);

    tower(n,'A','B','C');
    return 0;
}