#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[30];
    int tamanho;
    int contador;

    printf("\nDigite o nome: ");
    gets(nome);
    printf("\n-----------------------------\n");

    tamanho = strlen(nome);

    for(contador = 0; contador < tamanho; contador++)
    {
        if(contador % 2 == 1)
        {
            printf("  %c", nome[contador]);
        }
    }
    return 0;
}
