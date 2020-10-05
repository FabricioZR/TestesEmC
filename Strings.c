#include <stdio.h>
#include <stdlib.h>

void main()
{
    char palavra[255];
    //instrução p usuario;
    printf("Digite uma palavra.");

    //limpar o buffer que é o responsavel por fazer a leitura de mais de uma letra;
    setbuf(stdin, 0);           //stender input - entrada padrao;
    fgets(palavra, 255, stdin); //le a string;
    //ate aqui o programa esta usando 255 espaços de memoria para alocar a palavra;
    //temos que fazer algo para o programa reconhecer quando que a palavra acaba.
    //o char [255] funciona como um vetor que vai alocar a palavra, letra por letra, dentro de cada um dos espacos;

    //vai pegar o tamanho da string e diminuir 1, para descobrir qual é a quantidade de espaço que nosso vetor realmente precisa;
    palavra[strlen(palavra) - 1];

    printf("%s", palavra);
}