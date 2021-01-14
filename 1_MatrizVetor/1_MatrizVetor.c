#include <stdio.h>
#include <stdlib.h>

int main()
{
        int matrizA[4][4];
        int vetor[4];
        int linha = 0, coluna = 0;

/*LENDO A MATRIZ*/
        for(linha = 0; linha < 4; linha++)
            for(coluna = 0; coluna < 4;  coluna++)
            {
                    printf("elemento [%d][%d] =  ",  linha,  coluna);
                    scanf ("%d", &matrizA[ linha ][ coluna ]);
            }

    printf("\n");
/* MOSTRANDO VALORES ORIGINAIS DA MATRIZ*/
        for(linha = 0; linha < 4; linha++){
                for(coluna = 0; coluna < 4;  coluna++)
                {
                    printf("   %d ", matrizA[ linha ][ coluna ]);
                }
                printf("\n");
        }
        printf("\n");
/* */
        for(linha = 0 ; linha < 4; linha++)
        {
            for(coluna=0; coluna <4; coluna++)
            {
                vetor[linha] = (matrizA[linha][coluna]*coluna);
                printf("  %d", vetor[linha]);
            }

        }


    return 0;
}
