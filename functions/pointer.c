#include <stdio.h>
int main()
{
    int a = 5;
    int* x = &a;      // *x ne 'a' ke address pe ja kr uski value store kr li
    *x = 7;        // 'a' is changed from 5 to 7
    printf("%d",a);
    return 0;
}