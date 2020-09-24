#include <stdio.h>
#include <stdlib.h>

int matriz[10][10];

for (int i = 0; i < 10; i++)
{
    for (int j = 0; i < 10; j++)
    {
        matriz[i][j] = i * 3;
    }
}

//complexidade quadratica, o N², multiplica o n vezes numero de colunas