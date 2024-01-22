#include<stdio.h>
#include<string.h>
union pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
};

int main()
{
    union pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");   // only last initialization will be print properly

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}