#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[50];
        int age;
        int salary;
    };

    struct person I;
    strcpy(I.name,"Asad");
    I.age = 20;
    I.salary = 25000;

    struct person II;
    strcpy(II.name,"Khan");
    II.age = 25;
    II.salary = 38000;

    printf("1st person name is: %s\n",I.name);
    printf("Age of the 2nd person is: %d",II.age);

    return 0;
}