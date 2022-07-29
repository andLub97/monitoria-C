#include<stdio.h>
int main(){

    float nota1, nota2, media;

    printf("valor 1: ");
    scanf("%f",&nota1);

    printf("valor 2: ");
    scanf("%f",&nota2);

    if(nota1<0.0 || nota1>10.0 || nota2<0.0 || nota2>10.0){
            printf("\nvalor invalido informado!\n");
    }else{
            media = (nota1+nota2)/2;
    }
    printf("\nmedia: %.2f\n",media);

return 0;
}
