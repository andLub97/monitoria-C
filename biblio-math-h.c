#include <stdio.h>
#include <math.h>

int main(){

    int angulo = 0;

    //retorno eh em radianos
    //tan para tangente
    //cosh sinh h->hiperbolico
    float res = cos(angulo);
    float res2 = sin(angulo);
    printf("cosseno de %d eh %.2f\n",angulo, res);
    printf("\nseno de %d eh %.2f\n",angulo, res2);

    printf("\n\nexponencial de %d eh %.2f\n",1,exp(1));
    printf("\n\npotencia\n\n");
    printf("3 elevado a 2 eh %.1f",pow(3,2));
    printf("\n\nraiz\n\n");
    printf("\nraiz quadrada de 9 eh %.1f",sqrt(9));


    printf("\n\narredondamento\n\n");
    printf("\n%.2f",ceil(4.67));
    printf("\n%.2f",ceil(4.47));
    printf("\n%.2f",floor(6.67));
    printf("\n%.2f",floor(4.47));

return 0;
}
