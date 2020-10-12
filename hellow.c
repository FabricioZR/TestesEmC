#include <stdio.h>
#include <time.h>
void funcao(int i)
{
    for (int j = 0; j < 10000; j++)
    {
        printf("Aqui o i: %d\n", j);
    }
}

int main()
{
    clock_t start, end;

    start = clock();

    funcao(10000);

    end = clock();

    double difTempo = ((double)end - start) / CLOCKS_PER_SEC;
    printf("O tempo em s eh: %lf. O tempo em ms eh:%lf", difTempo, difTempo * 1000);

    return 0;
}