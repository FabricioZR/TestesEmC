/*
EXERCICIO Nº 1021 DO URI

Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário.
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto.
As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/

#include <stdio.h>
#include <math.h>
int main(void)
{
    double x = 0;
    int aux = 0;
    scanf("%lf", &x);
    x = x * 100;
    printf("NOTAS:\n");
    if (x >= 10000)
    {
        aux = (int)(x / 10000);
        x = x - (10000 * aux);
        printf("%d nota(s) de R$ 100.00\n", aux);
    }
    else
    {
        printf("0 nota(s) de R$ 100.00\n");
    }
    if (x >= 5000)
    {
        aux = (int)(x / 5000);
        x = x - (5000 * aux);
        printf("%d nota(s) de R$ 50.00\n", aux);
    }
    else
    {
        printf("0 nota(s) de R$ 50.00\n");
    }
    if (x >= 2000)
    {
        aux = (int)(x / 2000);
        x = x - (2000 * aux);
        printf("%d nota(s) de R$ 20.00\n", aux);
    }
    else
    {
        printf("0 nota(s) de R$ 20.00\n");
    }
    if (x >= 1000)
    {
        aux = (int)(x / 1000);
        x = x - (1000 * aux);
        printf("%d nota(s) de R$ 10.00\n", aux);
    }
    else
    {
        printf("0 nota(s) de R$ 10.00\n");
    }
    if (x >= 500)
    {
        aux = (int)(x / 500);
        x = x - (500 * aux);
        printf("%d nota(s) de R$ 5.00\n", aux);
    }
    else
    {
        printf("0 nota(s) de R$ 5.00\n");
    }
    if (x >= 200)
    {
        aux = (int)(x / 200);
        x = x - (200 * aux);
        printf("%d nota(s) de R$ 2.00\n", aux);
    }
    else
    {
        printf("0 nota(s) de R$ 2.00\n");
    }
    printf("MOEDAS:\n");
    if (x >= 100)
    {
        aux = (int)(x / 100);
        x = x - (100 * aux);
        printf("%d moeda(s) de R$ 1.00\n", aux);
    }
    else
    {
        printf("0 moeda(s) de R$ 1.00\n");
    }
    if (x >= 50)
    {
        aux = (int)(x / 50);
        x = x - (50 * aux);
        printf("%d moeda(s) de R$ 0.50\n", aux);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.50\n");
    }
    if (x >= 25)
    {
        aux = (int)(x / 25);
        x = x - (25 * aux);
        printf("%d moeda(s) de R$ 0.25\n", aux);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.25\n");
    }
    if (x >= 10)
    {
        aux = (int)(x / 10);
        x = x - (10 * aux);
        printf("%d moeda(s) de R$ 0.10\n", aux);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.10\n");
    }
    if (x >= 5)
    {
        aux = (int)(x / 5);
        x = x - (5 * aux);
        printf("%d moeda(s) de R$ 0.05\n", aux);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.05\n");
    }
    if (x >= 1)
    {
        printf("%d moeda(s) de R$ 0.01\n", (int)x);
    }
    else
    {
        printf("0 moeda(s) de R$ 0.01\n");
    }
    return (0);
}
