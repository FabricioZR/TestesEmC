#include <stdio.h>
#include <stdlib.h>
void ordena(int vetor[5]){
	int a, b, c, d;
	for (b=0; b<5; b++){
		for (c=0; c<5; c++){
		if (vetor[b] < vetor[c]){
			d = vetor[b];
			vetor[b] = vetor[c];
			vetor[c] = d;
		}
		}
	}
}
int main() {
	int v[5] = {1,3,5,2,4};
	ordena(v);
	int i;
	for (i = 0; i<5; i++){
	printf("%d,  ", v[i]);
}
}

