#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    //parte responsavel por alimentar o aleatorio;
    srand((unsigned)time(NULL));

    //unsigned para forçar a vim positivo. O time pega o tempo da maquina;
    int aleatorio = rand() % 3;

    //pega um numero aleatorio e recebe o resto da divisao por 3; Nesse caso os numeros aleatorios possiveis sao (0,1,2);
    //se quiser que o aleatorio seja entre 0 e 4, so fazer %5.

    printf("O numero aleatorio com resto de divisao por 3 eh: %d\n", aleatorio);

    int aleatoriosegundo = rand() % 5;
    printf("O numero aleatorio com resto de divisao por 5 eh: %d\n", aleatoriosegundo);
}