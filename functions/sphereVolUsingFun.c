#include<stdio.h>
void volume(float x)
{
    float vol;
    vol=4*3.14*x*x*x/3;
    printf("The volume of sphere is %f",vol);
    return;
}
void main()
{
    float r;
    printf("Enter r ");
    scanf("%f",&r);
    volume(r);                     //in case of void main call without int keyword
}