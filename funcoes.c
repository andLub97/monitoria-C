#include<stdio.h>
#include "teste.h"



int soma(int num1, int num2){
int res = num1+num2;
return res;
}
void proximo_char(char caractere){
printf("%c",caractere+1);
}

int main(){

    mensagem();
    printf("\nsoma: %d\n", soma(4, 6));

    char x = 'a';
    proximo_char(x);

return 0;
}
