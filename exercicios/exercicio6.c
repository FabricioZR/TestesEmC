#include <stdio.h>
#include <stdlib.h>

int main () {
int linhas1,linhas2,colunas1,colunas2;
printf("Numero de linhas da MATRIZ 1: ");
scanf("%d", &linhas1);
printf("Numero de colunas da MATRIZ 1: ");
scanf("%d", &colunas1);
printf("Numero de linhas da MATRIZ 2: ");
scanf("%d", &linhas2);
printf("Numero de colunas da MATRIZ 2: ");
scanf("%d", &colunas2);
int a,b,c,l;
if (linhas1 == colunas2 && linhas2 == colunas1){
	int m1[linhas1][colunas1];
	int m2[linhas2][colunas2];
	for (a=0; a< linhas1; a++){
		for(b=0;b<colunas1;b++){
			printf("\nMATRIZ 1: linha %d, coluna %d, valor:   ", a+1, b+1);
			scanf("%d", &m1[a][b]);}}
	printf("\nMATRIZ 2:\n");
	for (a=0;a<linhas2;a++){
		for(b=0;b<colunas2;b++){
			printf("\nMATRIZ 2: linha %d, coluna %d, valor:   ", a+1, b+1);
			scanf("%d", &m2[a][b]);}}
	 int soma = 0;
	 int resultado[linhas1][colunas2];
	 for (a=0;a<linhas1;a++){
	 	printf("\n");
	 	for(c=0 ; c < linhas1 ; c++){
	 		soma = 0;
	 		for(b=0; b<colunas1; b++){
	 		soma = soma + (m1[a][b] * m2[b][c]);}
		 	printf("Soma = %d ", soma);}}}}


