#include<stdio.h>
int main()
{
    int arr[5] = {2,3,6,8,1};                     // index 0 to 4
    arr[4] = 100;                 // {2,3,6,8,100}
    arr[1] = 1;                   // {2,1,6,8,100}
    printf("%d",arr[1]);
    return 0;
}