#include<stdio.h>
#include<string.h>
struct person
    {
        int age;
        float weight;
    };

int main()
{
    struct person a;
    a.age = 23;
    a.weight = 72.45;

    printf("%d\n",a.age);
    printf("%f\n",a.weight);

    struct person*x = &a;

    x->age = 28;
    x->weight = 76.88;

    printf("New age: %d\n",a.age);
    printf("New weight: %f\n",a.weight);
    
    return 0;
}