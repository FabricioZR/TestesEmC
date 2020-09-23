#include <stdio.h>
#include <stdlib.h>

int main () {
int n, lin, k, col,a,b,aux;
printf("O VALOR DE N: ");
scanf("%d", &n);
int m[n][n];
for(a = 0; a<n; a++){
	for (b = 0; b<n; b++){
	printf("Valor para a linha %d, colunha %d:    ", a, b);
	scanf("%d", &aux);
	m
	[a][b] = aux;}}
for(a = 0; a<n; a++){
	for (b = 0; b<n; b++){
		printf("%d       ", m[a][b]);
		if (m[a][b]>k){
			k = m[a][b];
			lin = a;
			col = b;}}
	printf("\n");}
printf("Maior: %d, Lin %d, Col %d", k, lin, col);}

