#include<stdio.h>

int main(){

    int numero, soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    while(numero!=0){
        soma+=numero;
        printf("Informe um numero: ");
        scanf("%d", &numero);
    }
    printf("A soma eh %d", soma);

return 0;
}
