#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[50];
        int pages;
        float price;
    };
    
    struct book a = {"Secret Seven",100,432.5};    // should be order wise as initialized
    // strcpy(a.name,"Secret Seven");
    // a.pages = 100;
    // a.price = 432.5;

    printf("Book name: %s\n",a.name);
    printf("No. of pages: %d\n",a.pages);
    printf("Price: %f\n",a.price);

    return 0;
}