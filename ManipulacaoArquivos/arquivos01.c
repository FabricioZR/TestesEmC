/*
Manipulaçãp de arquivos é a maneira como conseguimos ter acesso, ler, escrever por meio do codigo;

Os arquivos podem ser gravados em dois formatos (texto e binario);
Texto: sequencia de caracteres(1 byte) -- gravar dados simples, podemos abrir em qualquer editos;
Binario: sequencia de bytes -- gravar dados complexos; 

Abertura de arquivos; Leitura de arquivos; Escrita nos arquivos; Fechamento do arquivo;

O sistema tambem mantem um cursor que indica a posicao atual do arquivo;

Tipo de dado FILE declara um ponteiro descritor de arquivo;

Funçoes de c que manipulam arquivos estao em <stdio.h>

---------------
fopen retorna um ponteiro tipo FILE, se nao puder ser aberto retorna NULL;
fopen("nomeArquivo.txt", "ModoLeitura")

funcao fclose(FILE *fp) - fechar o arquivo; 
retorna 0 se foi executado com sucesso, ou EOF(end of file) se teve erro;
Quando o programa esta rodando mas nao utliza um arquivo deve ser fechado para proteger-lo.
---------------

MODOS DE ABERTURA DE ARQUIVO:

r(read): modo de leitura para arquivos ja existentes;
w(write):modo de escrita se nao existe ele cria; ele sobreescreve o codigo atual;
a(append):modo e escrita no final do arquivo; se nao existe ele cria, se existe ele nao sobreescreve
+:para ler/escrever simultaneamente; r+ indica leitura/escrita em um arquivo existente; w+ indica leitura e escrita em um novo arquivo.
t(text): modo texto; por padrao ja se usa ele, por isso nao precisa botar quando se le um arquivo tipo texto;
b(binary):modo binario;

-------------

funcao int feof(FILE *fp);
retorna 0 se ainda nao chegamos ao final de um arquivo;
inteiro diferente de 0 se a posicao corrente para o arquivo indicado é o final do arquivo;

------------

função LEITURA 
fgetc(text)- pega o proximo caractere; getc(FILE *arq);
fgets(text)- pega um sequencia de caracteres ate que encontre um \n ou te EOF; fgets(char *string, int size, FILE *arq);
fscanf(text)- pega os dados; fscanf(FILE *arq, "formato", variaveis);
fread(binario)- le binarios;

função ESCRITA
fputc(text)- grava um unico caractere; fputc(char c, FILE *arq);
fputs(text)- grava uma string; fputs(); fputs(char *string, FILE *arq);
fprintf(text)- grava dados em um determinado formato; fprintf(FILE *arq, "formato", variaveis);
fwrite(binario)- grava em binario;
*/

#include <stdio.h>
#include <stdlib.h>

//CRIANDO UM ARQUIVO;

int main(void){

    FILE *arquivo;
    //ponteiro arquivo do tipo FILE

    arquivo = fopen("ArquivoTexto.txt","a"); 
    //Se o arquivo nao existe, ele ira criar;
    //fopen aponta um arquivo no programa
    //("local/nome do arquivo","tipo de leitura(r,w,a")

    fprintf(arquivo,"11 12 13 14 15 16\n ");
    //Estou criando um arquivo e escrevendo nele;
    //fprintf recebe um ponteiro tipo file e entre "" a mensagem a ser escrita;

    fclose(arquivo); //Fechar o meu arquivo;

    return 0;

}