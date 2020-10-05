#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//biblioteca sddbool.h usada para ler booleano
void main()
{
    int i;
    float f;
    char c;
    bool b;

    i = 5;
    f = 5.5;
    c = 'a'; //para definir um char tem que ser entre aspas simples;
    b = true;

    printf("INTEIRO: %d \n", i);
    printf("FLOAT: %.2f \n", f);
    //%f para float e se usa .2f para duas casas apos a vírgula; .3f para três, etc...;
    printf("CHAR: %c \n", c);
    //%c usado para char;
    printf("BOOL: %d \n", b);

    printf("Digite um inteiro:\n");
    scanf("%d", &i);
    printf("Digite um float:\n");
    scanf("%f", &f);
    printf("Digite um char:\n");
    scanf(" %c", &c);
    //para pedir uma var char ao usuario tem que haver um espaco antes do %c;
    printf("Digite um bool:\n");
    scanf("%d", &b);

    printf("int eh: %d \n", i);
    printf("float eh: %.2f \n", f);
    printf("char eh: %c \n", c);
    printf("bool eh: %d \n", b);
}