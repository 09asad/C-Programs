#include<stdio.h>
#include<string.h>
#include<stdbool.h>           // for bool use
int main()
{
    struct day
    {
        int date;
        int month;
        int year;
    };

    struct day a;
    a.date = 16;
    a.month = 12;
    a.year = 2002;

    struct day b;
    b.date = 28;
    b.month = 02;
    b.year = 2004;

    bool flag = true;
    if(a.date != b.date) flag = false;
    if(a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;

    if(flag == true) printf("The days are same");
    else printf("The dates are different");

    return 0;
}