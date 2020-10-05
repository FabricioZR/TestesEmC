#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a = 10, b = 20;
    //conectivo and/e;
    if (a > 5 && a < 15)
    {
        printf("A maior que 5 e menor que 15");
    }
    //conectivo or/ou;
    if (a > 5 || a < 9)
    {
        printf("a maior que 5 ou menor que 9");
    }
    //misturando conectivos;
    if ((a > 5 && a < 9) || (a > 12 && a < 15))
    {
        printf("a esta entre 5 e 9 ou a esta entre 12 e 15 ");
    }
}