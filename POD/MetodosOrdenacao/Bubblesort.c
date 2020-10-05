/*
Algoritimo de ordenação por bolha (bubble), tambem conhecido como flutuante;
Comparações com elementos que estão em sucessão;
Se o elemento [0] da lista desordenada for maior que o [1], troca os elementos dentro dessas posições,
Caso não for, não faz nada;
Logo após essa primeira comparação ele pega o próximo elemento [1] e compara com o [2];
Depois pega o [2] e compara com o [3], sempre sequindo as regras citadas acima;
A lista ordenada fica sempre a direita, porque os elementos maiores vão flutuando para a frente;
O nº de interações e trocas depende do tamanho da lista e da ordem dos números;
Número de interações máximo: n-1;
Comparações: (n²-n)/2;
Complexidade: quadrática;
Complexidade de espaço: constante;
*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int list[], int n)
{
    for (int i = n; i > 1; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                swap(&list[j], &list[j + 1]);

                for (int l = 0; l < n; l++)
                {
                    printf("%d ", list[l]);
                }
                printf("\n");
            }
        }
    }
}

int main(void)
{
    int vetor[5] = {20, 13, 45, 1, 9};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    bubble_sort(vetor, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
}