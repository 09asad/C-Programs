#include<stdio.h>
int main()
{
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
    int maxCount = 0;
    int maxRow = -1;
    for(int i=0;i<3;i++)
    {
        int count = 0;
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==1) count++;
        }
        if(maxCount<count)
        {
            maxCount = count;
            maxRow = i;
        }
    }
    printf("Row of max 1 is %d\n",maxRow);
    printf("Number of 1 in max row is %d",maxCount);
    
}