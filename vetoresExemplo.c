#include<stdio.h>

int main(){

    char nome[50];
    printf("Nome: ");
    gets(nome);
    printf("\nOla %s\n",nome);

    char letras[26];
    int contador=0;
    for(int i =97; i<=122; i++){
        letras[contador] = i;
        contador+=1;
    }
    for(int i=0;i<26;i++){
        printf("%d==%c\n",letras[i],letras[i]);
    }

    //########################
    int numeros[5];
    numeros[0]=1;
    numeros[1]=3;
    numeros[2]=5;
    numeros[3]=7;
    numeros[4]=9;


    float valores[5];
    for(int i = 0; i< 5; i++){
        valores[i]=(float)numeros[i]/(float)2;
    }

    for(int i = 4;i>=0;i--){
        printf("%f\n",valores[i]);
    }

return 0;
}
