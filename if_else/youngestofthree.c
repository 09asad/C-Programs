#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter age of Ram: ");
    scanf("%d",&a);
     printf("Enter age of Shyam: ");
    scanf("%d",&b);
     printf("Enter age of Ajay: ");
    scanf("%d",&c);
    if(a<b && a<c)
    {
        printf("Ram is youngest");
    }
    if(b<a && b<c)
    {
        printf("Shyam is youngest");
    }
    if(c<a && c<b)
    {
        printf("Ajay is youngest");
    }
    return 0;
}