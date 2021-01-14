    #include <stdio.h>
    #include <conio.h>
    
    typedef struct {
        char nome[50];
        char matricula[30];
        char curso[50];
        int  contador;
    } Aluno;
	
int main(void) {
      
    int i;
      
	Aluno aluno[5];
      
    printf("\n---------- Cadastro de aluno -----------\n\n\n");
    printf("Bem-vindo ao cadastro de Alunos! \nSera pedido o cadastro de 5 pessoas a seguir (nome, matricula e curso). \n");
    for (i = 0; i < 5; i++) {
		
	    printf("\nNome do aluno ......: ");
	    fflush(stdin);
	    fgets(aluno[i].nome, 50, stdin);      
	    
	    printf("Matricula ......: ");
	    fflush(stdin);
	    fgets(aluno[i].matricula, 30, stdin);
	      
		printf("Curso ......: ");
	    fflush(stdin);
	    fgets(aluno[i].curso, 50, stdin);
	}
	
	for(i = 0;i < 5; i++) {      
	    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
	    printf("Nome ...........: %s", aluno[i].nome);
	    printf("Matricula .....: %s", aluno[i].matricula);
	    printf("Curso .....: %s", aluno[i].curso);      
      	printf("Pressione ENTER para avançar.");
      	getch();
    }
}
