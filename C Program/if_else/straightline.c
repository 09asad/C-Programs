#include<stdio.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,m1,m2;
    printf("Enter the value of x1 and y1: "); 
    scanf("%lf%lf",&x1,&y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%lf%lf",&x2,&y2);
    printf("Enter the value of x3 and y3: ");
    scanf("%lf%lf",&x3,&y3);
    m1=(y2-y1/x2-x1);      // slope
    m2=(y3-y2/x3-x2);      // slope
    if(m1=m2)
    {
        printf("They lie on the straight line");
    }
    else
    {
        printf("They do not lie on straight line");
    }
    return 0;
}