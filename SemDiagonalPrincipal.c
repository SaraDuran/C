#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	 int matriz[3][3], c, k;

	 for(c=0; c<3;c++){
	 	for(k=0; k<3;k++){
	 		printf("Digite um numero %d / %d: ", c, k);
	 		scanf("%d", &matriz[c][k]);
		 }
	 }
	 printf("\n");
	 for(c=0; c<3;c++){
	 	for(k=0; k<3;k++){
	 		if(c!=k){
	 			printf("%d ", matriz[c][k]);
			 }
		 }
		 printf("\n");
	 }
}
