#include<stdio.h>
int main()
{
    int a;      // operand
    scanf("%d",&a);
    char ch;     // +,-,*,/  -> operator
    scanf("%c",&ch);
    int b;      // operand
    scanf("%d",&b);
    switch(ch)
    {
        case '+' : printf("%d",a+b);
        break;
        case '-' : printf("%d",a-b);
        break; 
        case '*' : printf("%d",a*b);
        break;
        case '/' : printf("%d",a/b);
        break;
    }
}