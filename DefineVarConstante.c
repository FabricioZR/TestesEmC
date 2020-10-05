#include <stdio.h>
#include <stdlib.h>
#define TAM 10
//define TAM = 10;

void main()
{
    int i;

    //constante sao usadas para variaveis que nao podem mudar(que sao constantes);
    printf("%d", TAM);

    //contagem ate 10;
    for (i = 1; i < TAM; i++)
    {
        printf("%d\n", i);
    }
}