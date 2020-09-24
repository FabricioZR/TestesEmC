#include <stdio.h>
#include <stdlib.h>

int main () {
int n, aux,a,b,c;
printf("VALOR DE N: ");
scanf("%d", &n);
int mat[n][n];
for(a = 0; a<n; a++){
	for (b = 0; b<n; b++){
	printf("Valor para a linha %d, colunha %d:    ", a, b);
	scanf("%d", &aux);
	mat[a][b] = aux;}}
for(a = 0; a<n; a++){
	for (b = 0; b<n; b++){
    printf ("\t");
	printf("%d", mat[a][b]);}
    printf("\n");}
int m,coluna, linha;
    printf("\nElem Lin Col\n");
	for (c=0; c <(n*n); c++){
        m = 0;
        coluna = 0;
        linha = 0;
		for(a = 0; a<n; a++){
			for (b = 0; b<n; b++){
				if (mat[a][b]  > m){
					m = mat[a][b];
					linha = a;
					coluna = b;}}}
	printf("%d    %d    %d \n",m , linha, coluna );
	mat[linha][coluna]= 0;}}
