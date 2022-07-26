#include<stdio.h>

int main(){

    int soma = 0;
    int valor;

    for(int i = 1; i <=10; i++){
        printf("\ndigite um valor[%d]",i);
        scanf("%d",&valor);
        soma+=valor;
    }
    printf("\nsoma: %d\n",soma);

return 0;
}
