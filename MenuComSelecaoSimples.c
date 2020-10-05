#include <stdio.h>
#include <stdlib.h>

void main()
{
    int opcao;

    //o codigo vai pedir novamente ao usuario qual a sua opcao quando ele digitar algum numero diferente de 1,2 ou 3;

    while (opcao < 1 || opcao > 3)
    {

        printf("Escolha uma opcap:");
        printf("Opcao 1;\n");
        printf("Opcao 2;\n");
        printf("Opcao 3;\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Escolheu a opcao 1!\n");
            break;
        case 2:
            printf("Escolheu a opcao 2!\n");
            break;
        case 3:
            printf("Escolheu a opcao 3!\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    }
}