#include<stdio.h>
#include<stdlib.h>

int main(){

    int qtd, *p;

    printf("quantidade de valores: ");
    scanf("%d", &qtd);

    int bytes = qtd * sizeof(int);

    p = (int*)malloc(bytes);

    for(int i = 0; i < qtd; i++){
        printf("valor[%d]: ",i+1);
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < qtd; i++){
        printf("no vetor numeros[%d] esta o valor %d\n",i,p[i]);
    }
    printf("a variavel 'p' ocupa %ld bytes em meoria\n",bytes);

    free(p);
    p = NULL;

return 0;
}
