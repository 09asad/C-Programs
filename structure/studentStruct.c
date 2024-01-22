#include <stdio.h>
#include <string.h>

struct student              // user defined data type will be out of main function
{
    char name[15];
    int rollNo;
    char course[15];
    char dept[15];
    int yearOfjoining;
};

void check(struct student a, struct student b)
{
    if (strcmp(a.dept, b.dept) == 0)           // strcmp func is used to compare the two strings
    {
        printf("Both have same department");
    }
    else
    {
        printf("Both have different department");
    }
    return;
}

int main()
{
    struct student a;
    strcpy(a.name, "Asad Khan");
    a.rollNo = 9;
    strcpy(a.course, "B.Tech");
    strcpy(a.dept, "IT");
    a.yearOfjoining = 2023;

    struct student b;
    strcpy(b.name, "Shaikh Ahmad");
    b.rollNo = 18;
    strcpy(b.course, "B.Tech");
    strcpy(b.dept, "IT");
    b.yearOfjoining = 2022;
       
    check(a, b);

    return 0;
}