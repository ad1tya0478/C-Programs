#include <stdio.h>
int main (){

    struct pokemon{  // UUSER DEFINED DATATYPE
        int hp;
        int attack;
        int speed;
        char tier; // S,A,B,C,D
    } pika,chari;

    // struct pokemon pika;
    pika.attack = 70;
    pika.hp = 60;
    pika.speed = 80;
    pika.tier = 'A';
    printf("%d %d %d %c\n",pika.attack,pika.hp,pika.speed,pika.tier);

    // struct pokemon chari;
    chari.attack = 90;
    chari.hp = 80;
    chari.speed = 60;
    chari.tier = 'S';
    printf("%d %d %d %c",chari.attack,chari.hp,chari.speed,chari.tier);
    return 0;
}