#include<stdio.h>
int main()
{
    struct pokemon           // user defined data type
    {
        int hp;
        int speed;
        int attack;
    };
    
    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;

    printf("%d\n",pikachu.speed);

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;

    printf("%d",charizard.attack);

    return 0;
}