#include<stdio.h>
int main(){

/*
    algoritmo para somar tres valores e somá-los
    1.ler valor 1
    2.ler valor 2
    3.ler valor 3
    4.somar valores
    5.exibir resultado
*/
    float v1, v2, v3;

    printf("valor 1: \n");
    scanf("%f",&v1);

    printf("valor 2: \n");
    scanf("%f",&v2);

    printf("valor 3: \n");
    scanf("%f",&v3);

    float soma = v1 + v2 + v3;

    printf("\nSOMA: %.2f\n\n",soma);

return 0;
}
