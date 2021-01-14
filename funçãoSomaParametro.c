#include <stdio.h>
#include <stdlib.h>

void soma (int a, int b)
{
        int resultado;
        resultado = a+b;
        printf("A soma de %d com %d e %d", a, b, resultado);
}
 int main()
 {
     int a;
     int b;
     printf("Digite o primeiro numero: ");
     scanf("%d", &a );
     printf("Digite o segundo numero: ");
     scanf("%d", &b );
     soma(a,b);

    return 0;
 }
