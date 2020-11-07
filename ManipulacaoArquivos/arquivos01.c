/*
Manipulaçãp de arquivos é a maneira como conseguimos ter acesso, ler, escrever por meio do codigo;
*/

#include <stdio.h>
#include <stdlib.h>

//CRIANDO UM ARQUIVO;

int main(void){

    FILE *arquivo;
    //ponteiro arquivo do tipo FILE

    arquivo = fopen("ArquivoTexto.txt","w"); 
    //Se o arquivo nao existe, ele ira criar;
    //fopen aponta um arquivo no programa
    //("local/nome do arquivo","tipo de leitura(r,w,a")

    fprintf(arquivo,"11 12 13\n ");
    //Estou criando um arquivo e escrevendo nele;
    //fprintf recebe um ponteiro tipo file e entre "" a mensagem a ser escrita;

    fclose(arquivo); //Fechar o meu arquivo;

    return 0;

}