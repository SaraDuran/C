//Programa que recebe um numero e mostra seus divisores.//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    printf("Digite um valor: ");
    scanf("%d", &x);
    for (i=1;i<=x;i++)
    {

        if ((x%i)==0)
        {
               printf("\n %d eh divisor de %d", i, x );
        }
    }
    return 0;
}
