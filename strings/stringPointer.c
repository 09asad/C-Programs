#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Asad Khan";
    char* p = str;
    *p = 'S';              // it can change only first alphabet A with S 
    printf("%s",str);
    return 0;
}