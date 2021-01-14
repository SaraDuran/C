#include <stdio.h>

int main(){

    int i=1, n, tab;

    printf("Insira um valor para ver sua tabuada: ");
    scanf("%d", &n);
    printf("Tabuada do %d\n\n", n);


    while(i<=10){
        tab = n*i;
        printf("%d x %d = %d\n", n, i, tab);
        i++;
    }

}
