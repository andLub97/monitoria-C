#include<stdio.h>

int main(){

    /* ler 50 numeros inteiros e informar quais
    deles estao entre 10 (inclusive) e 100 (inclusive)

    ALGORITMO:

    enquanto 50 numeros nao forem lidos:
        ler um numero
        se o valor estiver no intervalo determinado
        informar que o numero esta no intervalo

    */

    int soma = 0;
    int i = 0;
    int valor;
    while(i<50){
        printf("valor[%d]: \n",i+1);
        scanf("%d",&valor);
        if(valor>=10 && valor <= 100){
            soma+=1;
        }
        i++;
    }
    printf("\nvalores no intervalo de 10 a 100: %d\n",soma);

return 0;
}
