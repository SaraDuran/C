#include <stdio.h>
#include <conio.h>
    
    typedef struct {
        char nome[50];
        char codDisciplina[30];
        char curso[50];
   	    float nota_prova1;
        float nota_prova2;
    } Aluno;
	
int main(void) {
      
    int i;
      
	Aluno aluno[10];
      
    printf("\n---------- Cadastro de aluno -----------\n\n\n");
      
    for (i = 0; i < 10; i++) {
		
	    printf("\nNome do aluno ......: ");
	    fflush(stdin);
	    fgets(aluno[i].nome, 50, stdin);      
	    
	    printf("Codigo da disciplina ......: ");
	    fflush(stdin);
	    fgets(aluno[i].codDisciplina, 30, stdin);
	      
		printf("Curso ......: ");
	    fflush(stdin);
	    fgets(aluno[i].curso, 50, stdin);
	    
	    printf("Informe a 1a. nota ..: ");
  		scanf("%f", &aluno[i].nota_prova1);
  
        printf("Informe a 2a. nota ..: ");
        scanf("%f", &aluno[i].nota_prova2);
	}
	
	for(i = 0;i < 10; i++){      
	    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
	    printf("\nNome ...........: %s", aluno[i].nome);
	    printf("Codigo da Disciplina .....: %s", aluno[i].codDisciplina);
	    printf("Curso ........: %s", aluno[i].curso);      
  	    printf("Media aluno........ %.2f",(aluno[i].nota_prova1 + (aluno[i].nota_prova2 * 2))/3);
      	getch();
    }
}

