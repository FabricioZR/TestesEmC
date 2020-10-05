#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 1, b = 10;

    //DO while primeiro executa e depois compara se é verdadeira;
    //Ou seja, sera executado pelo menos uma vez.

    do
    {
        printf("%d\n", a);
        a++;
    } while (a <= 10);

    do
    {
        printf("%d\n", b);
        b--;
    } while (b >= 1);
}