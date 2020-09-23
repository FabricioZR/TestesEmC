#include <stdio.h>
#include <stdlib.h>

void func(int *m){
	int i;
	for(i = 0; i<10000; i++){
	*m = 0;
	m++;
	}
	for(i = 0; i<10000; i++){
	m--;
	*m = 10000-i;}}
int main () {
int i, j;
int mat[100][100];
func(mat);
for(i = 0; i<100; i++){
	for(j = 0; j<100; j++)
	printf("%d ", mat[i][j]);
	}

}

