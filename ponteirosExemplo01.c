#include<stdio.h>

void incrementa(int* valor){
    printf("Antes de incrementar.\n");
    printf("contador vale: %d\n",(*valor));
    printf("o contador vale %d apos incremento\n",++(*valor));
    printf("\nendereco de memoria: %d\n",valor);
    printf("\n\n###############\n\n");
}

int main(){
    int contador = 10;
    printf("O contador vale %d\n",contador);
    printf("endereco de memoria: %d\n",&contador);
    printf("\n\n###############\n\n");
    incrementa(&contador);
    printf("\no ccontador vale %d\n", contador);
    printf("\nendereco de memoria: %d\n",&contador);

    return 0;
}
