#include<stdio.h>

int main(){

    float nota1,nota2,nota3;


    printf("nota 1 : ");
    scanf("%f",&nota1);
    printf("nota 2 : ");
    scanf("%f",&nota2);
    printf("nota 3 : ");
    scanf("%f",&nota3);

    float media = (nota1+nota2+nota3*2)/(1+1+2);
    printf("\n\n%.2f",media);
    if(media>=6){
        printf("\naprovado");
    }else{
    printf("\nreprovado");}

return 0;
}
