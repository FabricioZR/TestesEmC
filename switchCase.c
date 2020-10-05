#include <stdio.h>
#include <stdlib.h>

void main()
{

    int a = 3;
    char b = 'x';

    switch (a)
    {
    case 1:
        printf("A eh 1");
        break;

    case 2:
        printf("A eh 2");
        break;

    case 3:
        printf("A eh 3");
        break;

    default:
        printf("A nao eh nem 1, nem 2 e nem 3.");
        break;
    }
}