// EXERCICIO 1)
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x, *p, *q;
	p = &x;
	q = p;
	x = 10;
	printf("\n%d\n", *q);
	return (0);
}

// PARA COMPILAR
//gcc exercicio1.c -o prog
// ./prog