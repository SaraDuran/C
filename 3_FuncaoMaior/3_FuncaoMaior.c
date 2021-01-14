#include <stdio.h>
#include <stdlib.h>
int maiorNum(int num_1, int num_2)
{
     int maior=0;
    if(num_1 > num_2){
        maior = num_1;
    }
    else {
        maior = num_2;
    }
    return maior;
}

int main()
{
    int num_1 = 0;
    int num_2 = 0;
    int maiorN=0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num_1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num_2);
    maiorN = maiorNum(num_1, num_2);
    printf("Maior numero digitado: %d", maiorN);

    return 0;
}
