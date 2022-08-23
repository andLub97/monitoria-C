#include<stdio.h>

int main(){

    char s[100];
    char *ptr = s;//aponta para o primeiro caractere de s s[0] por padrao

    printf("string: ");
    gets(s);

    if(*ptr == '\0'){
        return 0;
    }

    while(*ptr!='\0'){
        putchar(*ptr++);
    }
    printf("\n\n");

    while(ptr>=s){
        putchar(*ptr--);
    }

return 0;
}
