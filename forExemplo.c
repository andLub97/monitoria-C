#include<stdio.h>

int main(){

    int numero, soma = 0;

    for(int i = 0; i <5; i++){
        printf("\nInforme um valor[%d]: ",i+1);
        scanf("%d",&numero);

        soma+=numero;
    }

    printf("A soma eh %d", soma);


return 0;
}
