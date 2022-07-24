//graus = rad*180/pi
#include <stdio.h>

int main(){

    float rad;

    printf("digite o valor em radianos: ");
    scanf("%f",&rad);
    float graus = rad*180/3.14;
    printf("\nvalor em graus: %.2f",graus);

return 0;
}
