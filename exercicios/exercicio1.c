// EXERCICIO 1)
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x, *p, *q;
	p = &x;
	q = p;
	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Seu numero eh: \n%d\n", *q);
	printf("O local aonde ele esta alocado na memoria eh: \n%d\n", p);
	return (0);
}

// PARA COMPILAR
//gcc exercicio1.c -o prog
// ./prog