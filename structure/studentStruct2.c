#include<stdio.h>
#include<string.h>

struct Student
{
    int roll_no;
    char name[50];
    char course[50];
    char department[50];
    int year_of_joining;
};

int haveSameDepartment(struct Student student1, struct Student student2)
{
    return strcmp(student1.department, student2.department) == 0; 
}           

int main()
{
    struct Student student1 = {101, "Alice", "Computer Science", "IT", 2023};
    struct Student student2 = {102, "Bob", "Electronics", "ECE", 2024};

    if (haveSameDepartment(student1, student2))
    {
        printf("The students have the same department \n");
    }
    else
    {
        printf("The students have different departments\n");
    }

    return 0;
}
