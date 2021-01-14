#include<stdio.h>

 void Menor(int numero1,int numero2, int numero3){
        if((numero1 <= numero2) && (numero1 <= numero3)){
                printf("Menor: %d", numero1);
        }
        else{

        if((numero2 <= numero1) && (numero2 <= numero3)){
                printf("Menor: %d", numero2);
        }
        else
        {
                printf("Menor: %d", numero3);
        }
        }
 }
 main(){
        int numero1, numero2, numero3;
                printf("Digite 3 valores: ");
               scanf("%d", &numero1);
               scanf("%d", &numero2);
               scanf("%d", &numero3);
               Menor(numero1, numero2, numero3);
        return 0;
 }
