#include <stdio.h>

int main(){

    float ms;
    float kmh;

    printf("Digite a velocidade em metros por segundo: ");
    scanf("%f",&ms);

    kmh = ms*3.6;

    printf("\nVelocidade em quiometros por hora: %.2f",kmh);


return 0;
}
