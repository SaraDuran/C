#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[60]; /* coloquei 60 para que caibam nomes grandes ou compostos*/
    char invertido[60];
    int contador =0;
    int contador2=0;

    printf("Digite o seu nome: ");
    gets(nome);

    for(contador = strlen(nome)-1; contador >= 0; contador--)
    {
        invertido[contador2] = nome[contador];
        contador2 ++;
    }
    invertido[contador2]= '\0';
    printf("%s", invertido);

    getch();
    return 0;
}
