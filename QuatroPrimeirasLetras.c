#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        int i, tamanho=30;
        char nome[tamanho];

        printf("Digite um nome: ");
        gets(nome);
        for(i=0; i<=3; i++)
        {
            printf("letra %d: %c\n", i+1, nome[i]);
        }
        printf("\n\n");
        system("pause");
}
