#include<stdio.h>
 int Maior(int numero1, int numero2, int numero3){
        if((numero1>=numero2)&&(numero1>=numero3)){
            return numero1;
        }
        else{
        if((numero2 >= numero1) && (numero2 >= numero3)){
            return numero2;
        }
        else{
            return numero3;
        }
        }
 }
int main(){
        int numero1, numero2, numero3;
        printf("\nDigite tres valores a seguir:\n ");
        printf("\nDigite o primeiro valor: \n");
        scanf("%d", & numero1);
        printf("\nDigite o segundo valor:\n ");
        scanf("%d", & numero2);
        printf("\nDigite o terceiro valor:\n ");
        scanf("%d", & numero3);
        printf("\nMaior: %d", Maior(numero1, numero2, numero3));
return 0;
 }
