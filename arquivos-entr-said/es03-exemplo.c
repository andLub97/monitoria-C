#include<stdio.h>

int main(){
    FILE *arq;
    int num, resultado, soma = 0;

    arq = fopen("valores.txt","r");
    if(arq){
        while(!feof(arq)){
            fscanf(arq,"%d",&num);
            soma=soma+num;
        }
    }else{
    printf("arquivo nao encontrado");
    }
    printf("A soma dos numeros encontrados eh %d", soma);
    fclose(arq);
    return 0;

}
