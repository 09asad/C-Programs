#include<stdio.h>
int main()
{
    for(int i=65;i<=90;i++)
    {
        char ch = (char)i;    // typeCasting
        printf("%c -> ",ch);
        printf("%d\n",i);

    }
    return 0;
}