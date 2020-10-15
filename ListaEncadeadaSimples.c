/*
Estrutura de dados dinamica;
inserir e remover elementos sem mexer na posicao de outros elementos;
Nao necessario definir numero maximo de elementos como no vetor;
A ideia é ter uma lista de endereços que apontam sempre para o seu elemento seguinte (*proximo);
voce sabe que chegou ao fim quando o *proximo elemento é NULL;
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
    int respostaUsuario;

    inicioPonto = (tponto *)malloc(sizeof(tponto)); //sizeof retorna o tamanho de um tipo;
    //malloc retorna null se n conseguir alocar;
    //Agpra vou fazer o teste e se nao conseguir alocar sai do programa;
    if (inicioPonto == NULL)
        exit(1);

    proximoPonto = inicioPonto;
    //o programa vai ficar pegando os dados, as coordenadas do ponto;
    while (1) //enquanto a pessoa quiser entrar com os dados elem processa;
    {
        printf("Digite x:\n");
        scanf("%d", &proximoPonto->x);
        //um ponteiro de estrutura acessa as variaveis com a seta;
        printf("Digite y:\n");
        scanf("%d", &proximoPonto->y);
        printf("Deseja continuar: |1|SIM  |2|NAO\n");
        scanf("%d", &respostaUsuario);
        if (respostaUsuario == 1)
        {
            proximoPonto->proximo = (tponto *)malloc(sizeof(tponto));
            proximoPonto = proximoPonto->proximo;
        }
        else
        {
            break;
        }
    }
    printf("\n");
    proximoPonto->proximo = NULL; //sei que a lista chegou ao fim quando o proximo é null;
    proximoPonto = inicioPonto;   //para começar a percorrer a lista do inicio;
    while (proximoPonto != NULL)
    {
        printf("x: %d e y: %d\n", proximoPonto->x, proximoPonto->y);
        proximoPonto = proximoPonto->proximo;
    }
    return (0);
}