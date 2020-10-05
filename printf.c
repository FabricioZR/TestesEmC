#include <stdio.h>
#include <stdlib.h>
//função int principal porque me retorna um numero inteiro;
//void main seria uma funcao que nao tem return, que nao retorna nada. Alguns compiladores nao permitem.
int main()
{
    float x, y;
    x = 4.4;
    y = 4.444444444;
    printf("O VALOR DE X EH: %.2f\n", x);
    printf("O VALOR DE y EH: %.2f", y);
    return 0;
}
//\n pula linha;