#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
//essa opcao me faz nao precisar usa o std:print//std::cin//std::cout;
int main()
{
    //matriz é um conjunto de vetores;

    int matriz[2][2], i, j;

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "\ni = "
                 << i << " , j = "
                 << j;
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "\n"
                 << matriz[i][j] << " ";
        }
    }

    //O usuario escolhe um valor para a matriz;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> matriz[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "\n"
                 << matriz[i][j] << " ";
                }
    }
    return 0;
}