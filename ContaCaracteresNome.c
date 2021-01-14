#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[30];
    int tamanho;

    printf("\nDigite seu nome a seguir: ");
    gets(nome);
    printf("\n-----------------------------");

    tamanho = strlen(nome);

    printf("\nOs espacos disponiveis para serem preenchidos sao %d \n", sizeof(nome));
    printf("\nE o seu nome possui %d caracteres (isto contando os espacos possiveis entre nome e sobrenome digitados e etc). \n", tamanho);
    return 0;
}
