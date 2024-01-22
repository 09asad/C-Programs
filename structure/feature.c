#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon          
    {
        int hp;
        int speed;
        int attack;
        char name[15];
    } pokemon;
    
    pokemon a,b;
    a.attack = 60;
    a.hp = 50;
    a.speed = 100;
    strcpy(a.name,"Charizardo");
    

    b = a;                // deep copy

    printf("%s",b.name);

    return 0;
}