/*Raquel Lais
Em 05 de agosto 2019
Quetão URI */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor, cem, cinq, vinte, dez, cinco, dois, um;

    scanf("%i", &valor);

    cem = (int)valor / 100;
    cinq = (int)(valor % 100) / 50;
    vinte = (int)(valor % 100) % 50 / 20;
    dez = (int)(valor % 100) % 50 % 20 / 10;
    cinco = (int)(valor % 100) % 50 % 20 % 10 / 5;
    dois = (int)(valor % 100) % 50 % 20 % 10 % 5 / 2;
    um = (int)(valor % 100) % 50 % 20 % 10 % 5 % 2 / 1;

    printf("%i\n", valor);
    printf("%i nota(s) de R$ 100,00\n", cem);
    printf("%i nota(s) de R$ 50,00\n", cinq);
    printf("%i nota(s) de R$ 20,00\n", vinte);
    printf("%i nota(s) de R$ 10,00\n", dez);
    printf("%i nota(s) de R$ 5,00\n", cinco);
    printf("%i nota(s) de R$ 2,00\n", dois);
    printf("%i nota(s) de R$ 1,00\n", um);

    return 0;
}
