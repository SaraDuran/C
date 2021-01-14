//Programa que recebe um numero e calcula seu fatorial//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int factorial = 1;
    int cont;

    printf("Digite o numero para calcular o fatorial: \n");
    scanf("%d", &n);
    for (cont =1; cont <= n; cont ++)
    {
            factorial = factorial * cont;
    }
    printf("O fatorial do numero %d e %d", n, factorial);
}
