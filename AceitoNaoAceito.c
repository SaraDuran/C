#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int idade;
    char nome[30];
    char genero;

    printf("Digite o seu nome a continuação : ");
    gets(nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Mulher? Digite 'F'. Homem? Digite 'M': ");
    limpar_entrada();
    scanf("%c", &genero);
    if (genero == 'F' && idade<25 ){
        printf("Nome: %s   ACEITA \n", nome);
    }
    else
    {
        printf(" \nNAO ACEITA");
    }


    return 0;
}
