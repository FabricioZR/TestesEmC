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
		 p++;
		}
	}
	for (i=0;i<50;i++){
		for (j=0;j<50;j++){
		printf("%.2f ", matrx[i][j]);
		}
		printf("\n");
	}
	return(0);

}

