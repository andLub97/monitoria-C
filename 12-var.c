#include<stdio.h>
int main(){

    //km = 1.61*milhas

    float km, milhas;

    printf("Digite a distancia em milhas: ");
    scanf("%f",&milhas);

    km = 1.61*milhas;
    printf("\ndistancia em km: %.2f",km);

}
