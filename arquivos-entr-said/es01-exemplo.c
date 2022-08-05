#include<stdio.h>

int main(){
    FILE *arq;
    char c;
    arq = fopen("teste.txt","r");

    //read : leitura
    //wa abrir para add conteúdo ,sem sobrescrita
    if(arq){
        //printf("arquivo encontrado");
        while((c = getc(arq))!= EOF){
                //eof : enf of file
            printf("%c",c);
        }
    }else{
    printf("Arquivo nao encontrado");
    }

    fclose(arq);

return 0;
}
