#include<stdio.h>

int main(){

    /*char nome[3][50];

    for(int i=0;i<3;i++){
        printf("Nome[%d]: ",i);
        gets(nome[i]);
    }
    for(int i=0;i<3;i++){
    printf("\nOla %s\n",nome[i]);
    }*/

    int numeros[2][2];

    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for(int i = 0; i <2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\n\n", numeros[i][j]);
        }
    }

return 0;
}
