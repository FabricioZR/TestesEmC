#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 4;
    int b = 1;

    if (a > 1)

    {
        b = a + 2;
    }
    else
    {
        b = a - 2;
    }

    //IF COM CONDIÇÂO TERNARIA

    b = (a > 1) ? a + 2 : a - 2;
}
//os dois fazem a mesma coisa, a condição ternaria nao funciona se tiver b++ ou b--;
//a prerogativa da condicao ternaria é que vai retornar algo se for verd e retorna algo se for falso
