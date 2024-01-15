#include<stdio.h>
int main()
{
    char str[50] = "My name is Asad Khan";            // we can also initialize max str integer
    int i=0;
    while(str[i] != 50)   
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
