#include <stdio.h>

int main(){

    int i=0, n, fat;


    while(i<=3){
        printf("Insira o um numero: ");
        scanf("%d", &n);

        if(n<0){
            printf("Numero invalido\n");
            i++;
        }

        else{
            for(fat = 1; n > 1; n = n - 1){
                fat = fat * n;
            }
            printf("Fatorial: %d", fat);
            return 0;
        }

        if(i == 3){
            printf("Suas chances acabaram");
            return 0;
        }

    }
}
