#include<stdio.h>
#include<stdlib.h>

//LENDO DE UM ARQUIVO;

int main(){

    FILE *file;
    file = fopen("ArquivoTexto.txt","rt"); //vai ler um arquivo de texto e ja existente;

    if (file == NULL){
      printf("ERROR");
      return 1;
    }
    
    int a,b,c,d,e;

    fscanf(file, "%i %i %i %i %i", &a, &b, &c, &d, &e);

    printf("%i %i %i %i %i", a, b, c, d, e);

    fclose(file);

  return 0;
}