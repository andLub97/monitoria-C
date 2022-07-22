//c = k - 273

#include<stdio.h>

int main(){

    float kelvin;
    printf("Temperatura em Kelvin: ");
    scanf("%f",&kelvin);
    printf("\n\n(obs: nao existe graus kelvin, eh somente kelvin\npois se trata de uma escala absoluta)\n\n");

    printf("Temperatura em graus celsius: %.2f\n\n",kelvin-273);



}
