#include<stdio.h>
#include<string.h>
int main()
{
    struct cricketer
    {
        char name[15];
        int age;
        int noOfmatches;
        float avg;
    };

    struct cricketer arr[3];       // details of 3 cricketer

    printf("Enter name, age, no of matches and average of 3 cricketers: \n");

    for(int i=0;i<3;i++)           // taking input
    {
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfmatches);
        scanf("%f",&arr[i].avg);
    }

    for(int i=0;i<3;i++)            // for output
    {
        printf("Name: %s\n",arr[i].name);
        printf("Age: %d\n",arr[i].age);
        printf("No of matches: %d\n",arr[i].noOfmatches);
        printf("Average: %f\n",arr[i].avg);
        printf("\n");
    }
    return 0;
}