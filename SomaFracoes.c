#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma=0;
    int i;

    for (i=1; i<= 10; i++)
    {

            if(i%2 == 0){
                soma = soma - ((float)i/(i*i));
            }
            else{
                soma = soma + ((float)i/(i*i));
            }
    }
    printf("S = %f ", soma);
    return 0;
}
