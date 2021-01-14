#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario = 0;
    double compras = 0;
    double carrinho = 0;

    printf("Digite o salario: ");
    scanf("%lf", &salario);
    printf("\n-------------------------\n");
    while(carrinho < salario)
    {
            printf("\nDigite o valor da compra: \n");
            scanf("%lf", &compras );
            carrinho+= compras;
            printf("\ncarrinho = %.2lf\n", carrinho);
    }
    return 0;
}
