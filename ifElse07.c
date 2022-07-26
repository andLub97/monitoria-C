#include <stdio.h>

int main(){

        float a, b;
        float maior;

        printf("digite o primeiro valor: ");
        scanf("%f",&a);

        printf("digite o segundo valor: ");
        scanf("%f",&b);

        if(a>b){
            maior = a;
            printf("\no maior numero eh: %.2f",a);
        }else{
        printf("\nvalores identicos\n");
        }


return 0;
}
