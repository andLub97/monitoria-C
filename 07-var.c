#include <stdio.h>


//c = (f-32)*(5/9)
int main(){

    float valor;
    printf("valor em fahrenheit: ");
    scanf("%f",&valor);

    printf("\nValor em celsius: %.1f\n",(valor-32)*(5.0/9.0));


return 0;
}
