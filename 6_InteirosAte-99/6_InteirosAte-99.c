#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 0;
    int soma= 99;
    int media= 0;
    int cont=-1;
    printf("Sera mostrada a soma dos valores inseridos e depois a media entre eles.\nPara parar de inserir valores, digite -99. \nEste ultimo valor nao sera tido em conta, isto e, nao vai ser somado aos \nvalores que o usuario digite e nem valera na media.\n -------------------------\n ");
    while((valor != -99))
    {
            printf("\nDigite o valor: \n");
            scanf("%d", &valor );
            soma+= valor;
            cont++;
            media= (soma/cont);
    }
    printf("\nA soma de todos os valores digitados eh igual a: %d \nA media de todos os elementos digitados eh igual a: %d", soma, media);

    return 0;
}
