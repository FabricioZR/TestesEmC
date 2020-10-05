#include <stdio.h>
#include <stdbool.h>

int main ()
{

	unsigned alturaPlaca, larguraPlaca, numPedidos;
	unsigned alturaPCI, larguraPCI;
	unsigned areaPlaca, i;

	while (scanf("%u %u %u", &alturaPlaca, &larguraPlaca, &numPedidos) != EOF)
	{

		for (i = 0; i < numPedidos; i++)
		{
			scanf("%u %u", &alturaPCI, &larguraPCI);

			if ((alturaPCI <= alturaPlaca && larguraPCI <= larguraPlaca) || (alturaPCI <= larguraPlaca && larguraPCI <= alturaPlaca))
				printf("Sim\n");
			else
				printf("Nao\n");
		}

	}
	return 0;
}
