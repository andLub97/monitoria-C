#include<stdio.h>

int main(){

    float salario;
    float prestEmpr;

    printf("Digite o salario: ");
    scanf("%f",&salario);

    printf("\nValor da prestacao: ");
    scanf("%f",&prestEmpr);

    if(prestEmpr>0.20*salario){
        printf("\nemprestimo nao concedido");
    }else{
        printf("\nemprestimo concedido\n");
    }

return 0;
}
