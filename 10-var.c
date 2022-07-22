#include <stdio.h>

int main(){

    float velocidade;

    printf("digite a  velocidade em km/h: ");
    scanf("%f",&velocidade);

    printf("\nVelocidade em m/s: %.2f",velocidade/3.6);


return 0;
}
