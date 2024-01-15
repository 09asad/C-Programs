#include<stdio.h>
#include<string.h> 
int main()
{
    char str[40];

    // scanf("%s",str);      // only first world will be input

    gets(str);                // entire sentence can be input

    puts("Your input was: ");    // print output
    puts(str);                 
    
    return 0;
}
