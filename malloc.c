/*
Alocação dinamica de memoria para armazenar valores inteiros num vetor;
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[5]; //Alocação estatica de memoria; Tem 5 lugares na memoria (20bits);

    int x = 10;

    int *p = &x;
    //vou ter um ponteiro mostrado o endereco de memoria aonde esta alocado o int x;

    int *pont = (int *)malloc(sizeof(x));
    //sizeof traz a quantidade de byts de um dado;
    //malloc (memory alocation) pede ao sistema operacional um bloco de memoria de um tamanho (sizeof) definido;
    //neste cado *pont retorna o endereco de espaço de memoria que foi alocado;

    int *pontei = (int *)malloc(10 * sizeof(x));
    //posso alocar espaco para um vetor com 10 inteiros;

    //(int *) força o ponteiro a ser de tipo int; isso é chamado de casting; forçando que o valor retornado seja do mesmo tipo que o ponteiro esta definido (int;)

    int *ponteiro = (int *)malloc(4);
    //estaria solicitando alocação de espaco na memoria de 4 byts;

    //& = endereço de;
    printf("%d\n", &vetor);
    printf("%d\n", x);
    printf("%d\n", &x);
    printf("%d\n", *p);
    printf("%d\n", *pont);
    printf("%d\n", *pontei);
    printf("%d\n", *ponteiro);

    return 0;
}