#include<stdio.h>
int main()
{
    int arr[8] = {1,2,3,4,5,8,9,10};       // only for sorting(i.e. ascending order) array
    int target = 8;
    int i = 0;
    int j = 7;
    while(i<j)
    {
        if(arr[i]+arr[j] == target)
        {
            printf("(%d,%d) is the pair that added up to target",arr[i],arr[j]);
            break;
        }
        else if(arr[i]+arr[j] > target) 
        j--;
        else
        i++;
    }
    return 0;
}