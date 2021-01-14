#include <stdio.h>
 #include <stdlib.h>


 int main ()
 {

 float altura, media=0, backup_media=0;

 int idade=1, cont=0;



 do{

    while (idade > 0)
    {
        printf ("DIGITE A IDADE:");
        scanf ("%d", &idade);

        printf ("DIGITE A ALTURA:");
        scanf ("%f", &altura);

        printf ("\n");

        if (idade >50){

            cont++;
            backup_media = backup_media + altura;
            media = backup_media;
            media = media / cont;


        }



	}
 }while(idade != 0 );
 printf ("A media de altura das pessoas com mais de 50 anos é: %f\n\n", media);
return 0;
}
