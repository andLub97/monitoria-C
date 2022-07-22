#include <stdio.h>


//f = c*(9/5) + 32

int main(){

    float valor;
    printf("valor em celsius: ");
    scanf("%f",&valor);

    printf("\nValor em Fahrenheit: %.1f\n",valor*(9.0/5.0)+32);


return 0;
}
