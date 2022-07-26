#include<stdio.h>

int main(){

    int soma = 0;
    int valor;
    int maior,menor;

    printf("digite um valor[1]: ");
    scanf("%d",&maior);
    menor = maior;

    for(int i = 1; i <10; i++){

        printf("\ndigite um valor[%d]",i+1);
        scanf("%d",&valor);
        if(valor>maior){
            maior = valor;
        }
        if(valor<menor){
        menor = valor;}

    }
    printf("\nmaior: %d\n",maior);
    printf("\nmenor: %d\n",menor);

return 0;
}
