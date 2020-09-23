#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


int x, *p, *q;
p = &x;
q = p;
x = 10;
printf("\n%d\n", *q);
return(0);

	return 0;
}
