#include <stdio.h>
#include <string.h>
typedef struct pokemon         // user defined data type will be out of main function
{
    int hp;
    int speed;
    int attack;
} pokemon;

void fun(pokemon p)
{
    printf("%d", p.hp);
    return;
}
int main()
{
    pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;

    fun(pikachu);

    // printf("%d\n", pikachu.attack);
    // printf("%d\n", pikachu.hp);
    // printf("%d\n", pikachu.speed);

    return 0;
}