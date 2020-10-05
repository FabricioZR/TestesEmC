/*
É "selecionado (selection)" na lista desordenada o menor elemento e troca ele com o [0] dessa mesma lista;
A lista ordenada fica a esquerda; elementos a esquerda são todos menores ou iguais aos da direita;
Complexidade: quadrática em todos os casos;
Não é sensível a ordenação inicial;
Espaço: constante; 
Realiza menos trocas que o bubble sort;
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int c = 0;
  printf("Digite o tamanho de vetor e em seguida os valores do vetor: \n");
  scanf("%d", &c);
  int lista[c];
  for (int d = 0; d < c; d++)
  {
    int h = 0;
    scanf("%d", &h);
    lista[d] = h;
  }

  for (int z = 0; z < c; z++)
  {
    printf("%d ", lista[z]);
  }
  printf("\n");
  int menor_do_menor = lista[0];
  for (int i = 0; i < c; i++)
  {
    int menor = lista[i];
    int posmenor = i;
    for (int j = i; j < c; j++)
    {
      if (lista[j] < menor)
      {
        menor = lista[j];
        posmenor = j;
      }
    }
    int a = lista[i];
    lista[i] = menor;
    lista[posmenor] = a;
    for (int o = 0; o < c; o++)
    {
      printf("%d ", lista[o]);
    }
    printf("\n");
  }
  for (int o = 0; o < c; o++)
  {
    printf("%d ", lista[o]);
  }
  return 0;
}
