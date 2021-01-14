#include <stdio.h>

int SOMA(int a, int b)
{
   int resultado;
   resultado = a + b;
   return resultado;
}

int main()
{
        int a;
        int b;
        int s;
        printf("\nDigite a seguir dois numeros: \n");
   scanf("%d %d", &a, &b);
    s= SOMA(a,b);
    printf("\nA soma de %d com %d e %d\n", a,b,s);
    return 0;
}
