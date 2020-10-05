#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a;
    //contando ate 10;
    //para(inicial,condicao, encremento);
    for (a = 1; a <= 10; a++)
    {
        printf("%d\n", a);
    }

    //tabuada do 5;
    for (a = 1; a <= 10; a++)
    {
        printf("5 X %d = %d\n", a, 5 * a);
    }

    //contando de 2 em 2;
    for (a = 0; a <= 10; a += 2)
    {
        printf("%d\n", a);
    }
}