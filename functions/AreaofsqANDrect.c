#include<stdio.h>
int Areaofrect(int x, int y)
{
    int arr;
    arr=x*y;         // or directly use return x*y; 
    return arr;
}
int Areaofsq(int b)
{
   int arrr;
   arrr=b*b;         // or directly use return b*b;
   return arrr;
}
void main()
{
    int l,b;
    printf("Enter length and breadth: ");
    scanf("%d%d",&l,&b);
    int a;
    printf("Enter sides: ");
    scanf("%d",&a);
    int Area=Areaofrect(l,b);
    printf("The area of rectangle is %d\n",Area);
    int ar=Areaofsq(a);
    printf("The area of square is %d",ar);
}                                                 // in case of void main NO return 0;