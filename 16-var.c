#include<stdio.h>

int main(){

    float pol;
    printf("digite o comprimento em polegadas: ");
    scanf("%f",&pol);

    float cent = pol*2.54;

    printf("comprimento digitado em cm: %.4f",cent);

return 0;
}
