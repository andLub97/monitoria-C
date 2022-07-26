#include<stdio.h>

int main(){

    int numero, soma= 0;

    do{
    printf("Informe um numero: ");
    scanf("%d", &numero);
    soma+=numero;
    }while(numero!=0);

    printf("\nA soma eh %d\n", soma);


return 0;
}
