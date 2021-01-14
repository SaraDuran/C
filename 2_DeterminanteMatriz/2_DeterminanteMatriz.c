#include <stdio.h>
#include <stdlib.h>

int main()
{
       int matrizOriginal[3][3];
       int diagonalPrincipal = 1, diagonal_2=1, diagonal_3=1;
       int diagonalInvertida_1=1, diagonalInvertida_2=1, diagonalInvertida_3= 1;
       int linha = 0, coluna = 0, determinante = 0;

       /*inicializando a matriz*/
       for(linha = 0; linha<3; linha++)
       {
            for(coluna = 0; coluna< 3; coluna++)
            {
                    matrizOriginal[linha][coluna]= 0;
            }
       }

/*LENDO A MATRIZ*/
        for(linha = 0; linha < 3; linha++)
        {
            for(coluna = 0; coluna < 3;  coluna++)
            {
                    printf("\nelemento [%d][%d] =  ",  linha,  coluna);
                    scanf ("%d", &matrizOriginal[ linha ][ coluna ]);
            }
        }
    printf("\n");
/* MOSTRANDO VALORES ORIGINAIS DA MATRIZ*/
        for(linha = 0; linha < 3; linha++){
                for(coluna = 0; coluna < 3;  coluna++)
                {
                    printf("   %d", matrizOriginal[ linha ][ coluna ]);
                }
                printf("\n");
        }
        printf("\n");

        for(linha = 0; linha < 3; linha++){
                for(coluna = 0; coluna < 3;  coluna++)
                {
                    if(linha==coluna){
                        diagonalPrincipal*=matrizOriginal[linha][coluna];
                    } else if((coluna==linha+1)||(coluna==linha-2)){
                        diagonal_2*=matrizOriginal[linha][coluna];
                    } else if((coluna==linha+2)||(coluna==linha-1)){
                        diagonal_3*=matrizOriginal[linha][coluna];
                    }
                    if((linha+coluna==2)){
                        diagonalInvertida_1*=matrizOriginal[linha][coluna];
                    } else if((linha+coluna==0)||(linha+coluna==3)){
                        diagonalInvertida_2*=matrizOriginal[linha][coluna];
                    } else if((linha+coluna==1)||(linha+coluna==4)){
                        diagonalInvertida_3*=matrizOriginal[linha][coluna];
                    }
                }
        }

      determinante=((diagonalPrincipal+diagonal_2+diagonal_3)-diagonalInvertida_1-diagonalInvertida_2-diagonalInvertida_3);

      printf("O determinante da matriz[3][3] e igual a: %d", determinante);


    return 0;
}
