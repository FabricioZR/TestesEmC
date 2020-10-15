#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero;
    float nota;
    char nome[40];   //vetor com 40 nomes;
    float notas[20]; //vetor com 20 notas;

    //Struct usada quando voce precisa armazenar varios dados relativos a alguma coisa;

    struct FichaDoAluno
    {
        char nome[40];
        int matricula;
        float nota;
    };
    //definicao da struct (dei um nome e seus componentes);
    //struct nao é uma variavel, é um tipo de dado;

    struct FichaDoAluno aluno;
    //aqui eu defino alunoabc como uma variavel do tipo struct FichaDoAluno;

    printf("\n--------------CADASTRO------------\n");

    printf("Digite o nome:\n");
    fgets(aluno.nome, 40, stdin);
    //vou pegar dentro da variavel aluno um atributo chamado nome;

    printf("Digite a matricula:\n");
    scanf("%d", &aluno.matricula);
    //vou pegar dentro da variavel aluno um atributo chamado matricula;

    printf("Digite a nota:\n");
    scanf("%f", &aluno.nota);
    //vou pegar dentro da variavel aluno um atributo chamado nota;

    //PARA EXIBIR OS DADOS:
    printf("NOME........%s\n", aluno.nome);
    printf("MATRICULA...%d\n", aluno.matricula);
    printf("NOTA........%.2f\n", aluno.nota);

    return (0);
}