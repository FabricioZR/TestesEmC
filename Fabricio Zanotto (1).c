// EXERCICIO 1)
#include <stdio.h>
#include <stdlib.h>


int main() {
int x, *p, *q;
p = &x;
q = p;
x = 10;
printf("\n%d\n", *q);
return(0);}
//----------------------------------------------------
//EXERCICIO 2)
#include <stdio.h>
#include <stdlib.h>
void ordena(int vetor[5]){
	int a, b, c, d;
	for (b=0; b<5; b++){
		for (c=0; c<5; c++){
		if (vetor[b] < vetor[c]){
			d = vetor[b];
			vetor[b] = vetor[c];
			vetor[c] = d;}}}}
int main() {
	int v[5] = {1,3,5,2,4};
	ordena(v);
	int i;
	for (i = 0; i<5; i++){
	printf("%d,  ", v[i]);}}
//-----------------------------------------------------
//EXERCICIO 3)
#include <stdio.h>
#include <stdlib.h>

void strcopy(char *str, char *str2){
	while (*str2 != '\0'){
		*str = *str2;
		str++;
		str2++;}}
int main() {
char str[50], str2[50];
fgets(str, 50, stdin);
strcopy(str,str2);
printf("%s", str);}


//-------------------------------------------------------
//EXERCICIO 4
#include <stdio.h>
#include <stdlib.h>

int main () {

	float matrx [50][50];
	int i,j;
	float *p;
	p = &matrx;
	for (i=0;i<50;i++){
		for (j=0;j<50;j++){
		*p = 0.0;
		 p++;}}
	for (i=0;i<50;i++){
		for (j=0;j<50;j++){
		printf("%.2f ", matrx[i][j]);}
		printf("\n");}
	return(0);}
//------------------------------------------------------------
//EXERCICIO 5)

#include <stdio.h>
#include <stdlib.h>

void func(int *m){
	int i;
	for(i = 0; i<10000; i++){
	*m = 0;
	m++;}
	for(i = 0; i<10000; i++){
	m--;
	*m = 10000-i;}}
int main () {
int i, j;
int mat[100][100];
func(mat);
for(i = 0; i<100; i++){
	for(j = 0; j<100; j++)
	printf("%d ", mat[i][j]);}}
//-----------------------------------------------------------------
//EXERCICIO 6)
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
//-----------------------------
// EXERCICIO 7)
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
	m[a][b] = aux;}}
for(a = 0; a<n; a++){
	for (b = 0; b<n; b++){
		printf("%d       ", m[a][b]);
		if (m[a][b]>k){
			k = m[a][b];
			lin = a;
			col = b;}}
	printf("\n");}
printf("Maior: %d, Lin %d, Col %d", k, lin, col);}
//--------------------------------
//EXERCICIO 8)
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
