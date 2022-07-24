#include<stdio.h>
int main(){

    //km/1.6 =milhas

    float km, milhas;

    printf("Digite a distancia em km: ");
    scanf("%f",&km);

    milhas = km/1.6;
    printf("\ndistancia em milhas: %.2f",milhas);

}
