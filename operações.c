#include<stdio.h>
 int soma(int x, int y){
       return(x+y);
   }
 int subtrai(int x, int y){
       return(x-y);
   }
 int multiplica(int x, int y){
       return(x*y);
   }
 float divide(int x,int y){
       return((float)x/y);
   }
 int main()
 {
    int valor1, valor2;
       printf("\nDigite 2 valores: ");
       scanf("%d", &valor1);
       scanf("%d", &valor2);
       printf("\nSoma: %d", soma(valor1, valor2));
       printf("\nSubracao: %d", subtrai(valor1, valor2));
       printf("\nMultiplicacao: %d", multiplica(valor1, valor2));
       printf("\nDivisao: %.2f", divide(valor1, valor2));
       return 0;
 }
