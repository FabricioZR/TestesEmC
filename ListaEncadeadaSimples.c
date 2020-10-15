/*
Estrutura de dados dinamica;
inserir e remover elementos sem mexer na posicao de outros elementos;
Nao necessario definir numero maximo de elementos como no vetor;
*/

#include <stdio.h>
#include <stdlib.h>

//Declarar a struct;
typedef struct ponto
{
    int x, y;
    struct ponto *proximo; //nessa linha eu tenho um ponteiro que aponta uma estrutra chamada ponto;
} tponto;                  //Quando eu for declarar uma variavel do tipo  struct ponto basta digitar ponto;

int main(int argc, char *argv[])
{
    tponto *inicioPonto; //tponto * identifica o ponteiro;
    tponto *proximoPonto;

    inicioPonto = (tponto *)malloc(sizeof(tponto)); //sizeof retorna o tamanho de um tipo;

    return (0);
}