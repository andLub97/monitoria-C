#include <stdio.h>
#include <ctype.h>  //teste de tipos de caracteres

int main(){

    /*
    isalnum -> verifica se � alfanum�rico::::letras e n�meros
    isalpha -> alfab�tico
    isdigit -> digito decimal
    ispunct -> pontua��o
    isspace -> h� espa�o em branco
    isupper -> mai�sculo
    tolower -> converte pra min�sculo
    toupper -> converte pra mai�scula
    */


    char teste = 'd';

    if(isalnum(teste)){
        printf("\nalfanumerico\n");
    }else{
        printf("nao e alfanumerico\n");
    }
    if(isalpha(teste)){
        printf("\nalfabetico\n");
    }else{
        printf("\nnao e alfabetico\n");
    }
    if(isdigit(teste)){
        printf("\ndigito\n");
    }else{
        printf("\nnao e digito\n");
    }




return 0;
}
