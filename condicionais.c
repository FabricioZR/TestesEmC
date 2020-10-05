#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 5, opcao = 1;
    float b = 2.5;
    char c = 'x';

    //se é igual a 5;
    if (a == 5)
    {
        printf("A = 5\n");
    }
    else
    {
        printf("A != 5\n");
    }

    //Se é impar;
    if (a % 2 == 1)
    {
        printf("eh impar\n");
    }
    else
    {
        printf("n eh impar\n");
    }

    if (c == 'x')
    {
        printf("C = x\n");
    }

    //condicional composta
    if (opcao == 1)
    {
        printf("opcao = 1\n");
    }
    else if (opcao == 2)
    {
        printf("opcao = 2\n");
    }
    else
    {
        printf("opcao nao eh 1 nem 2\n");
    }
}
