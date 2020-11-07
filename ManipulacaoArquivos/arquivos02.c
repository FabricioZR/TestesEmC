/*
FILE *fp = fopen ("entrada.txt", "rt"); //rt modo leitura de um arquivo texto
if(fp==NULL){
    print (Arquivo nulo)
    exit(1); //aborta o programa
}

associa o ponteiro com o arquivo

MODOS DE LEITURA:

r(read): modo de leitura para arquivos ja existentes;
w(write):modo de escrita se nao existe ele cria; ele sobreescreve o codigo atual;
a(append):modo e escrita no final do arquivo; se nao existe ele cria, se existe ele nao sobreescreve
+:para ler/escrever simultaneamente; r+ indica leitura/escrita em um arquivo existente; w+ indica leitura e escrita em um novo arquivo.
t(text): modo texto;
b(binary):modo binario;

funcao fclose(FILE *fp)
fechar o arquivo; 
retorna 0 se foi executado com sucesso, ou EOF se teve erro;
Quando o programa esta rodando mas nao utliza um arquivo deve ser fechado para proteger-lo.

funcao int feof(FILE *fp);
retorna 0 se ainda nao chegamos ao final de um arquivo;
inteiro diferente de 0 se a psicao corrente para o arquivo indicado é o final do arquivo;

MODO TEXTO(fputc fputs fprintf fgetc fgets fscanf)
MDO BINARIO(fwrite fread)

int fputc(char c, FILE *fp);
int fgetx(FILE *fp) 
int fputs(char *str, FILE *fp) 
fget le cada caracter
char* fgets(char *str, int size, FILE *fp) le a linha ou o tamanho que a gente passa pra ele
fscanf le qualquer coisa
*/
#include<stdio.h>
#include<stdlib.h>

//LENDO DE UM ARQUIVO;

int main(){

    FILE *file;
    int i,a [5] = {0,1,2,3,434};
    char string[13];

    file = fopen("ArquivoTexto.txt", "r+");
    if (file == NULL){
        printf("Deu caca! -- Veja se não esta usando o R+\n");
        return 1;
    }

    for (i=0; i< 5; i++){
        fprintf(file, "%d\n", a[i]);
    }
    fclose(file);

    file = fopen("ArquivoTexto.txt", "r");
    if (file == NULL){
        printf("Deu caca!\n");
        return 1;
    }

    for (i=0; i< 5; i++){
        fscanf(file, "%d\n", &a[i]);
        printf("lemos: %d\n", a[i]);
    }

   //fget -> char by char
   //fgets -> linha, ou o tamanho que passarmos como parametro.
   //fscanf - > lê qualquer coisa.

    fclose(file);

    return 0;
}