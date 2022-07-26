#include <stdio.h>

int main(){

        float a, b;
        float maior, menor;

        printf("digite o primeiro valor: ");
        scanf("%f",&a);

        printf("digite o segundo valor: ");
        scanf("%f",&b);

        if(a>b){
            maior = a;
            menor = b;
            printf("\no maior numero eh: %.2f",a);
            printf("\ndiferenca entre os valores: %.2f",a-b);
        }else if(b>a){
            maior = b;
            menor = a;
            printf("\no maior numero eh: %.2f",b);
            printf("\ndiferenca entre os valores: %.2f",b-a);
        }else{
        printf("\nvalores identicos, a diferenca entre eles eh zero\n");
        }


return 0;
}
