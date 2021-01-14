#include <stdio.h>
#include <math.h>

int main(){

	int numA, numB;
	float x;

	printf("Digite um numero A para a funcao: ");
	scanf("%d", &numA);
	printf("\nDigite um numero B para a funcao: ");
	scanf("%d", &numB);
	x=(numA*pow(numB,1/3))/2*numA;
	printf("\n O resultado eh = %.2f", x);
    return 0;
}
