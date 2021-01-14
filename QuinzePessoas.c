#include<stdio.h>
#include<stdlib.h>
	
int main(){
	float i, p, med_1, med_2, med_3, med_4, soma, y;
	int a = 0, b = 0, c = 0;
	int x;
	y=0;
	soma=0;
	
	for(x=1; x<=15; x++){
	    printf("\nDigite a idade da %d pessoa: ",x);
	    scanf("%f",&i);
	    printf("Digite o peso da %d pessoa: ",x);
	    scanf("%f",&p);
	    printf("\n_____________________________________________\n");
	    if(i>=1&&i<=10){
	        y=y+1;
	        soma=soma+p;
	        med_1=soma/y;
	
	    }
	    if(i>=11&&i<=20){
	        a=a+1;
	        soma=soma+p;
	        med_2=soma/a;
	
	    }
	    if(i>=21&&i<=30){
	        b=b+1;
	        soma=soma+p;
	        med_3=soma/b;
	
	    }
	    if(i>=31){
	        c=c+1;
	        soma=soma+p;
	        med_4=soma/c;
	
	    }
	
	}
	printf("\nA media dos pesos das pessoas entre 1 e 10 anos   = %.2f\n",med_1);
	printf("\nA media dos pesos das pessoas entre 11 e 20 anos  = %.2f\n",med_2);
	printf("\nA media dos pesos das pessoas entre 21 e 30 anos  = %.2f\n",med_3);
	printf("\nA media dos pesos das pessoas maiores ou iguais 31 anos = %.2f\n",med_4);
	
	
	
	system("pause");
	return(0);
}
