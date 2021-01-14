#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media;
    int soma=0;
    int i;
    int cont=0;

    for (i = 10; i<= 50; i++){
        if((i%2) == 0){
                cont = cont +1;
                soma = soma + i;
        }
    }
    media = soma/cont;
    printf("a media dos numeros pares entre 10 e 50 eh de %.f",  media);

    return 0;
}
