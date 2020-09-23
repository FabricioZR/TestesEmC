#include <stdio.h>
#include <math.h> //para usar a fun��o sqrt
#include <string.h>

/* Definir uma struct para um n� de uma topologia de rede */

struct no{
	int id;
	float posicaoX;
	float posicaoY;
};

struct enlace{
	int id;
	char tipo[20];
	int capacidade;
	float comprimento;
	struct no nodos[2];
};



void imprimeDadosNo(struct no x){
	printf("ID: %d, X: %.2f, Y: %.2f\n", x.id, x.posicaoX, x.posicaoY);
}

void imprimeDadosEnlaceptr(struct enlace *e){
	printf("ID: %d\n", e->id);
	printf("Tipo: %s\n", e->tipo);
	printf("Capacidade: %d\n", e->capacidade);
	printf("Comprimento: %.2f\n", e->comprimento);
	printf("Nodos(id): %d - %d\n", e->nodos[0].id, e->nodos[1].id);
}

void imprimeDadosNoptr(struct no *x){
	printf("ID: %d, X: %.2f, Y: %.2f\n", x->id, x->posicaoX, x->posicaoY);
}

// Exercicio: criar uma fun��o para calcular a distancia euclidiana entre dois n�s.
// D = Raiz[(xdestino - xorigem)^2 + (ydestino - yorigem)^2]
float distanciaEuclidiana(struct no *origem, struct no *destino){
	float distancia = (float) sqrt(((destino->posicaoX - origem->posicaoX) * (destino->posicaoX - origem->posicaoX)) +
	((destino->posicaoY - origem->posicaoY) * (destino->posicaoY - origem->posicaoY)));

	return distancia;
}



int main(){

	// Structs

	// Instanciar um n�
	struct no no1;

	// Preencher os dados do n�
	no1.id = 1;
	no1.posicaoX = 10.5;
	no1.posicaoY = 20.5;

	// Imprimir os dados do n�
	printf("ID: %d, X: %.2f, Y: %.2f\n", no1.id, no1.posicaoX, no1.posicaoY);

	// Imprimir os dados do n� a partir de uma fun��o
	imprimeDadosNo(no1);
	imprimeDadosNoptr(&no1);

	// Criar um vetor de n�s;
	struct no nodos[4];

	//Preencher os dados dos nodos no vetor;
	nodos[0].id = 1;
	nodos[0].posicaoX = 1;
	nodos[0].posicaoY = 4;

	nodos[1].id = 2;
	nodos[1].posicaoX = 2.5;
	nodos[1].posicaoY = 3.5;

	nodos[2].id = 3;
	nodos[2].posicaoX = 4;
	nodos[2].posicaoY = 3;

	nodos[3].id = 4;
	nodos[3].posicaoX = 3;
	nodos[3].posicaoY = 2;

	// Calcular a dist�ncia Euclidiana entre os nodos
	printf("Distancia entre os nodos %d e %d = %.2f" , nodos[0].id, nodos[1].id, distanciaEuclidiana(&nodos[0], &nodos[1]));


	// Criar um enlace
	struct enlace e1;

	// Preencher os dados do enlace
	e1.id = 1;
	strcpy(e1.tipo, "fibra");
	e1.capacidade = 40;
	e1.nodos[0] = nodos[0];
	e1.nodos[1] = nodos[1];
	e1.comprimento = distanciaEuclidiana(&e1.nodos[0], &e1.nodos[1]);

	// Imprimir informacoes do enlace
	printf("\n");
	imprimeDadosEnlaceptr(&e1);

	return 0;
}
