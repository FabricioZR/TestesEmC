#include <stdio.h>
#include <stdlib.h>
 
typedef int inteiro;
typedef float flutuante;
//typedef se usa para atribuir sinonimos a tipos de dados;
//tyoedef int inteiro (agora a declaracao de uma variavel |int a| ficaria |inteiro a|);

int main(int argc, char*argv[])
{
    inteiro x, y;
    flutuante a, b;

    x = 2;
    y = 6;
    a = 3.4;
    b = 5.5;

    printf("int: %d \n",x);
    printf("int eh: %d \n",y);
    printf("float eh: %f \n",a);
    printf("float eh: %f \n",b);

    return 0;
}