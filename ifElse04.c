#include<stdio.h>
#include<math.h>

int main(){

    float numero;
    printf("digite um numero: ");
    scanf("%f",&numero);

    if(numero>0){
        printf("numero ao quadrado: %.2f",numero*numero);
        printf("\nraiz quadrada do numero: %.2f",sqrt(numero));
    }else{
        printf("programa finalizado...\n\n");
    }


return 0;
}
