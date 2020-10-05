#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 1, b = 10;
    //contanto ate 10;
    while (a <= 10)
    {
        //imprimindo a;
        printf("%d\n", a);
        //encrementando a;
        a += 2;
    }
    //regressivo;
    while (b >= 1)
    {
        printf("%d\n", b);
        b--;
    }
}