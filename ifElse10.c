#include<stdio.h>

int main(){

    float h;
    char sexo;

    printf("Digite a altura: ");
    scanf("%f",&h);
    fflush(stdin);
    printf("\nDigite o sexo: ");
    scanf("%c",&sexo);

    float pIdealH = (72.7*h) - 58;
    float pIdealM = (62.1*h) - 44.7;

    if(sexo == 'm'){
        printf("\nPeso Ideal do Homem: %.2f",pIdealH);
    }else if(sexo=='f'){
        printf("\nPeso Ideal da Mulher: %.2f",pIdealM);
    }else{
    printf("\n\nentrada errada\n\n");
           }

return 0;
}
