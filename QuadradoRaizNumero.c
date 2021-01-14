#include <stdio.h>
#include <math.h>

int main(){

	float r;
	int n;
	printf ("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	r=n*n;
	printf("Valor ao quadrado: %.0f\n", r);
	r=sqrt(n);
	printf("Raiz de %d: %.2f\n", n, r);
	return 0;
}
