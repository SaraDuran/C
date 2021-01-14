#include<stdlib.h>
#include<stdio.h>

#define MIN 4
#define MAX 9

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}
void inserirBases();

int main() {

	char matBases[MIN][MAX];

	printf("\nInsira, separadamente, cada uma das 4 bases nitrogenadas do DNA: \n");
	inserirBases(matBases);

	system("PAUSE");
	return 0;
}

void inserirBases(char matBases[MIN][MAX]) {

	int i, j;

	printf("\n------------------------------\n");
	printf("**Bases Nitrogenadas**\n");
	printf("------------------------------\n");
	printf("A - Adenina\n");
	printf("C - Citosina\n");
	printf("G - Guanina\n");
	printf("T - Timina\n");
	printf("------------------------------\n");

	for(i = 0; i <MIN; i++) {
            printf("\n SEQUENCIA DNA %d:", i+1);
		for(j = 0; j <MIN; j++) {
            printf("\nInforme a base nitrogenada: ");
			scanf("%c", &matBases[i][j]);
			limpar_entrada();
			printf("i =%d e j =%d", i, j);
			printf("\n");
		}
	}

}
