/*
    author: gschreiner
    Este é um código simples de implementação de uma lista duplamente encadeada utilizando duas estruturas. 
    Este código foi construido na aula do dia 14/10/2020;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct ItemLista
{
    int valor;

    struct ItemLista *next;
    struct ItemLista *prev;
};
typedef struct ItemLista ItemLista;

typedef struct //usamos isso para facilitar a passagem por parametro da lista inteira;
{
    ItemLista *head; //primeiro elemento da lista;
    ItemLista *tail; //ultimo elemento da lista;
} Lista;

#define MAX 1000

/*
* Método responsável pro criar a lista. Recebe como parâmetro a estrutura da lista e o número de elementos que será gerado.
*/

//o que eu quero fazer é adicionar um novo elemento em algum lugar da lista;
//Passo a lista toda e um dos elementos como parametro;
//O que ele vai fazer é adicionar na frente desse elemento;
//vai mudar os ponteiros, e vou criar outros pra incluir o meu novo item nessa lsita e manter ela encadeada;
//

void adicionaElemento(Lista *lista, ItemLista *itemAnterior, ItemLista *elemento)
{

    if (itemAnterior == NULL) //Trocar a cabeça da lista, adicionar antes do primeiro elem;
    {
        //aponteiramentos;
        lista->head->prev = elemento; //anterior da cabeca adiciona antes do primeiro elemento;
        elemento->next = lista->head; //anterior da cabeca aponta para o novo;
        elemento->prev = NULL;        //anterior do novo é nada;
        lista->head = elemento;       //atualiza o head da lista;
        return;                       //eu poderia botar os outros ifs dentro de um else tb;
    }

    //adicionando um elemento em qlq posição;
    //Recebe como parametro a lista, o elemento anterior ao inserido e o inserido;
    //Nesse caso, eu so posso inserir esse elemento em todos os lugares menos no primeiro lugar da lista;
    ItemLista *itemProximo = itemAnterior->next; //se item anterior for nulo da segmentation fault;
    if (itemProximo == NULL)                     //quando o proximo item é nulo ele é o fim da lista;
    {
        itemAnterior->next = elemento;
        elemento->prev = itemAnterior;
        elemento->next = NULL;
        lista->tail = elemento;
    }
    else
    { //agora vamos ver sobre os outros menos o ultimo;
        itemAnterior->next = elemento;
        itemProximo->prev = elemento;
        elemento->next = itemProximo;
        elemento->prev = itemAnterior;
        //Nesse caso, a ordem nao muda nada porque estamos usando a variavel next pra fazer as trocas;
    }
}

void criaLista(Lista *lista, int size)
{
    ItemLista *aux;

    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++)
    {
        aux = (ItemLista *)malloc(sizeof(ItemLista));
        aux->valor = rand() % MAX;
        aux->next = NULL;
        aux->prev = NULL;

        if (lista->head == NULL)
        { //lista vazia
            lista->head = aux;
            lista->tail = aux;
        }
        else
        {

            adicionaElemento(lista, lista->tail, aux);

            /*                         //faz encadeamento
            lista->tail->next = aux; //Proximo do último elemento recebe o elemento criado
            aux->prev = lista->tail;
            lista->tail = aux; //Elemento criado vira o último da lista;
        */
        }
    }
}

/*
* Método que imprime a lista. Recebe como parâmetro a lista a ser impressa na tela, 
*   e um interio que define a ordem de apresentação (caso > 0 imprime em ordem de inserção, 
    caso contrário imprime em ordem inversa a inserção)
*/
void imprimeLista(Lista *lista, int order)
{
    ItemLista *aux;
    if (order > 0)
    {
        for (aux = lista->head; aux != NULL; aux = aux->next)
        {
            printf("%d\n ", aux->valor);
        }
    }
    else
    {
        for (aux = lista->tail; aux != NULL; aux = aux->prev)
        {
            printf("%d\n ", aux->valor);
        }
    }
}

void METinsertionSort(Lista *lista)
{
    ItemLista *i, *j, *aux, *elemento;

    for (i = lista->head->next; i != NULL; i = i->next)
    {
        for (j = i; j != NULL; j = j->prev)
        {
            if (j->valor > elemento->valor)
            {
                aux = elemento->prev;
                aux->prev = j;
            }
        }
    }
}

int main()
{

    Lista *lista = NULL;

    lista = (Lista *)malloc(sizeof(Lista)); //aloca espaço para a lista
    lista->head = NULL;
    lista->tail = NULL;

    ItemLista *aux = (ItemLista *)malloc(sizeof(ItemLista));
    //adicionaElemento(lista, lista->head, aux); //forçando a adicionar um novo na frente da cabeça da lista;
    criaLista(lista, 10);
    //adicionaElemento(lista, lista->head->next, aux); //forçando a adicionar um novo na frente da frente da cabeça da lista;

    adicionaElemento(lista, lista->head->next->next, aux); //forçando a adicionar um novo na frente da frente da frente da cabeça da lista;

    printf("Primeiro elemento %d;\n Ultimo Elemento: %d\n\n", lista->head->valor, lista->tail->valor);

    printf("Ordem de inserção: \n");
    imprimeLista(lista, 1);

    aux->valor = -23; //estou adicionando elemento -23 na lista;

    printf("\nOrdem apos inserir o -23: \n");
    imprimeLista(lista, 1);

    return 0;
}