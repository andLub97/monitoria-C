#include<stdio.h>

int main(){
    FILE *arq;
    char nome[10],*resultado;
    arq = fopen("teste.txt","r");

    //read : leitura
    //wa abrir para add conteúdo ,sem sobrescrita
    if(arq){
        //printf("arquivo encontrado");
        while(!feof(arq)){
            resultado = fgets(nome, 10, arq);
            printf("resultado: %d\n", resultado);
            if(resultado){
                printf("%s\n", nome);
            }
        }
    }else{
    printf("Arquivo nao encontrado");
    }

    fclose(arq);

return 0;
}
