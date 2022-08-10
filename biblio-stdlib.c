#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char valor_s[5];
    double valor_d;

    strcpy(valor_s, "4.5");
    //atof converte string para double
    valor_d = atof(valor_s);

    printf("O valor eh %.2f",valor_d);


    //atoi converte string para inteiro
    //existem também outras variações
    time_t t;
    srand((unsigned) time(&t));

    //geracao de seq pseudo aleatoria
    //gerar 6 valores entre 0 e 60
    for(int i = 0; i < 6; i++){
        printf("\n\n%d\n",rand()%61);
        //toda vez o mesmo conjunto eh gerado
        //para evitar isso, uso o srand
    }



return 0;
}
