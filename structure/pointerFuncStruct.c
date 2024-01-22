#include<stdio.h>
#include<string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

void change(pokemon* p)
{
    p->hp = 70;                     // OR (*p).hp = 70;
    p->attack = 90;                 // OR (*p).attack = 90;
    p->speed = 110;                 // OR (*p).speed = 110;
    p->tier = 'S';                  // OR (*p).tier = 'S';
    strcpy(p->name,"Raichu");       // OR strcpy((*p).name,"Raichu");
    return;
}

int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);

    printf("New hp: %d\n",pikachu.hp);
    printf("New attack: %d\n",pikachu.attack);
    printf("New speed: %d\n",pikachu.speed);
    printf("New tier: %c\n",pikachu.tier);
    printf("New name: %s\n",pikachu.name);
}