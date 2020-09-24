//variavel que armazena um endereco de memoria e nao um valor
//armazena o endereço de uma variavel
//possui dois operadores: (*,&)
//int *p; //declara um ponteiro. Declara que ha uma variavel p que armazena um endereco de memoria

//int v = 10; //declara uma variavel v
/////p = &v;     //passa o endereco de v para o ponteiro p. & acessa o endereco de memoria de uma var
// //printf ("%d", p);

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ponteiro;
    int valor = 45;

    printf("%d %d %x %x", valor, *ponteiro, ponteiro, &valor);
    return 0;
}

//%x imprime o valor que ta mapeado, o endereco na pilha de memoria
//%d imprime um inteiro
//%p tipo para imprimir um ponteiro em si
//%s imprime string
//NULL padroniza o nada

