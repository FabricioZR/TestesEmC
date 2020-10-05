#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 8;
    int b = 3;

    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d-%d=%d\n", a, b, a - b);
    printf("%d/%d=%d\n", a, b, a / b);
    printf("%dx%d=%d\n", a, b, a * b);
    //resto da divisao, seria quando sobra se dividir a/b;
    //Exm. se dividir 8/3 sobra 2; se dividir 8/2 sobra 0; 3%2 = 1;
    printf("Resto da divisao de %d por %d eh %d\n", a, b, a % b);
    //valor absoluto é so forçar aquele valor para virar positivo;
    printf("Valor absoluto de -3 eh: %d\n", abs(-3));
}