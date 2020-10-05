#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vetor[10], i;

    for (i = 0; i < 10; i++)
    {
        vetor[i] = i * 3;
        printf("Posicao %d : %d\n", i, vetor[i]);
    }

    //lendo valores e passando para um vetor
    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero para adicionar ao vetor.");
        scanf("%d\n", &vetor[i]);
        printf("Posicao %d : %d\n", i, vetor[i]);
    }
}
