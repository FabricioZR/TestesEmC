/*
Simular a maneira que as pessoas ordenam cartas de baralho;
Começa pelo segundo elemento da lista desordenada e compara com o primeiro, se for menor troca essas posições;
Na segunda interação, pega o [2] e compara com o [1], se [2]<[1] então troca os elementos;
Se for menor, agora o elemento que antes era [2] agora está em [1], ai ele é comparado com o [0] e segue a mesma lógica anterios;
A idéia é partir de um elemento e ir inserindo outros já em parte ordenada;
Inserção direta;
Basicamente, pega os números a direita como se tivesse selecionando cartas, ai compara com as "cartas" que você ja tem,
da direita para a esquerda e ai é encontrado a sua posição;
Método eficiente para listas quase ordenadas;
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c = 0;
    printf("Digite o tamanho de vetor e em seguida os valores do vetor: \n");
    scanf("%d", &c);
    int lista[c];
    for (int d = 0; d < c; d++)
    {
        int h = 0;
        scanf("%d", &h);
        lista[d] = h;
    }

    for (int z = 0; z < c; z++)
    {
        printf("%d ", lista[z]);
    }
    printf("\n");

    for (int i = 1; i < c; i++)
    {
        int pivo = lista[i];
        int j = i - 1;
        while (j >= 0 && lista[j] > pivo)
        {
            lista[j + 1] = lista[j];
            j--;
        }
        lista[j + 1] = pivo;

        for (int o = 0; o < c; o++)
        {
            printf("%d ", lista[o]);
        }

        printf("\n");
    }
    for (int o = 0; o < c; o++)
    {
        printf("%d ", lista[o]);
    }
    return 0;
}
