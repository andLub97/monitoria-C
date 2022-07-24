//rad=graus*(pi/180)
#include <stdio.h>

int main(){

    float graus;

    printf("digite o valor em graus: ");
    scanf("%f",&graus);
    float rad = graus*3.14/180;
    printf("\nvalor em radianos: %.2f",rad);

return 0;
}
