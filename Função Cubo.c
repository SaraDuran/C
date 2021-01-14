#include <stdio.h>

int CUBO(int cubo, int vetorCubo[5], int numero, int contador)
{
    cubo = (numero * numero * numero);
    vetorCubo[contador]= cubo;
}
int main()
{
    int numero =0;
    int contador = 1;
    int vetorCubo[5];
    int cubo;

    for(contador; contador<= 5; contador++)
    {
          printf("\nDigite um numero a seguir:\n");
          scanf("%d", &numero);
          CUBO(cubo, vetorCubo, numero, contador);
          printf("\nOs valores armazenados sao: Cubo[%d] = %d\n", contador, vetorCubo[contador]);
          printf("\n--------------------------------------------------\n");
    }
}
