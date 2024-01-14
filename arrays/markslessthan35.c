#include<stdio.h>
int main()
{
    int marks[10]={95,90,31,27,100,50,25,89,15,30};            // marks[0] to marks[9]
    for(int i=0;i<10;i++)
    {
        if(marks[i]<35)
        {
            printf("%d ",i);       // if print marks then printf(marks[i]) AND if index then printf(i) only
        }
    }
    return 0;
}