#include <stdio.h>


int retornaDobro(int x){
    return x*2;
}

int main(){

    int valor;
    printf("digite um valor: ");
    scanf("%d",&valor);
    int dobroValor = retornaDobro(valor);
    printf("\nO dobro de %d equivele a %d\n",valor,dobroValor);

return 0;
}
