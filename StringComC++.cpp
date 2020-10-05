#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
//essa opcao me faz nao precisar usa o std:print//std::cin//std::cout;

int main()
{
    //Fazendo as mesmas açoes do arquivo String.c, mas dessa vez usando C++;
    string palavra;

    cout << "Digite uma palavra\n"; //imprimindo
    cin >> palavra;                 //lendo a string
    cout << "A palavra é:\n"
         << palavra;
    //imprimindo a entrada do usuario

    return 0;
}
