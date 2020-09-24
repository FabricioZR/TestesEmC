#include <stdio.h>
#include <stdlib.h>

//Exemplo da aula de Ordenação de dados -- Nao sei porque ta tanto erro

//IF

int a = 0;
int b = 0;

if (a > 1)
    b = a + 2;
else
    b = a - 2;

//IF COM CONDIÇÂO TERNARIA

b = (a > 1) ? a + 2 : a - 2;

//os dois fazem a mesma coisa, a condição ternaria nao funciona se tiver b++ ou b--;
//a prerogativa da condicao ternaria é que vai retornar algo se for verd e retorna algo se for falso
