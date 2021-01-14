#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int maior=0;

    printf("\nO programa a seguir funciona da seguinte maneira:  \nO usuario deve digitar quaisquer numeros a continuacao. \nO programa ira parar de receber valores quando o usuario digitar 0. \nDepois de digitar 0, sera mostrado qual o maior valor de todos os digitados.");
    printf("\n\nDigite o primeiro numero: ");
    scanf("%d", &numero);

    while(numero != 0 ){
        printf("\n\nDigite o proximo numero: ");
        scanf("%d", &numero);
            if(numero > maior){
                maior = numero;
            }
    }
    printf("O maior numero digitado e: %d", maior);

    return 0;
}
