#include<stdio.h>

int main(){

    int soma = 0;
    int valor;
    int contador=0;
    float media;

    for(int i = 1; i <=10; i++){
        printf("\ndigite um valor[%d]",i);
        scanf("%d",&valor);
        if(valor>0){
            soma+=valor;
            contador+=1;
            }
    }
    printf("\nsoma: %d\n",soma);
    printf("\nmedia: %.2f\n",(float)soma/contador);

return 0;
}
