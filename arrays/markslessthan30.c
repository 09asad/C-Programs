#include<stdio.h>
int main()
{
    int marks[10];                   
    for(int i=0;i<=9;i++)
    {
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(marks[i]<30)
        {
            printf("%d ",i);       // if print marks then printf(marks[i]) AND if index then printf(i) only
        }
    }
    return 0;
}