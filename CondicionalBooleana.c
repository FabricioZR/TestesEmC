#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//biblioteca sddbool.h usada para ler booleano

void main()
{
    bool v = true, f = false;
    if (v)
    {
        printf("v = true\n");
    }
    else
    {
        printf("v = Falso\n");
    }

    if (f)
    {
        printf("f é verdadeiro\n");
    }
    else
    {
        printf("B é falso\n");
    }

    //comparando uma falsidade
    //se f nao for verdadeiro
    if (!f)
    {
        printf("F é falso");
    }