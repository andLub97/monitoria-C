#include <stdio.h>
#include <ctype.h>  //teste de tipos de caracteres

int main(){

    /*
    isalnum -> verifica se é alfanumérico::::letras e números
    isalpha -> alfabético
    isdigit -> digito decimal
    ispunct -> pontuação
    isspace -> há espaço em branco
    isupper -> maiúsculo
    tolower -> converte pra minúsculo
    toupper -> converte pra maiúscula
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
