#include <stdio.h>
#include <stdlib.h>

int main () {
int n, aux,i,j,k,p;
printf("Digite um numero N");
scanf("%d", &n);

int mat[n][n];

for(i = 0; i<n; i++){


	for (j = 0; j<n; j++){

	printf("Valor para a linha %d, colunha %d:    ", i, j);
	scanf("%d", &aux);
	mat[i][j] = aux;


	}

}

for(i = 0; i<n; i++){   //MOSTRANDO A MATRIZ


	for (j = 0; j<n; j++){

	printf("     %d", mat[i][j]);


	}


  printf("\n");

}

int m,col, lin;
printf("\nElem Lin Col\n");

	for (k=0; k <(n*n); k++){
	 m = 0;
	 col = 0;
	 lin = 0;

		for(i = 0; i<n; i++){

			for (j = 0; j<n; j++){

				if (mat[i][j]  > m){

					m = mat[i][j];
					lin = i;
					col = j;

				}



			}

		}

	printf("%d    %d    %d \n",m , lin, col );
	mat[lin][col]= 0;
	}

}

