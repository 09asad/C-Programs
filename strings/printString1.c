#include<stdio.h>
int main()
{
    char str[] = "My name is Asad Khan"; 
    int i=0;
    while(str[i] != '\0')                // use of '\0' whose ASCII value is zero. It automatically calculate how many characters we initialize.
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
