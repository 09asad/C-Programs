#include <stdio.h>
int main()
{
    int a = 25;
    int* x = &a;        // *x ne 'a' ke address pe ja kr uski value store kr li
    int** y = &x;        // **y ne 'x' ke address pe ja kr uski value store kr li
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    return 0;
}