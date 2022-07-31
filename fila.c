#include <stdio.h>
#define TAMFILA 10


    int fila[TAMFILA] = {0};
    int head = 0;
    int tail = 0;

void listaElementos(){
    printf("\n\nFila Atual\n\n");
    for(int i = 0; i<TAMFILA;i++){
        printf("|%d|", fila[i]);
        printf(".");
    }
    printf("\nHead: %d\n", head);
    printf("tail: %d\n", tail);
    printf("\n\n");
}

void enqueue(){
int val;
if(tail<TAMFILA){
    printf("Adicione um valor: ");
    scanf("%d",&val);
    fila[tail]=val;
    tail+=1;
    listaElementos();
}else{
printf("fila cheia\n");}
}

void dequeue(){
    if(head<tail){
        fila[head]=0;
        head+=1;
    }else{
    printf("fila vazia");
    }
}
void clear(){
    for(int i = 0;i<TAMFILA;i++){
        fila[i]=0;
    }
    head=0;
    tail=0;
}

int main(){

    //fifo - first in first out
    int opcao = 0;
    do{
            printf("selecione a opcao: \n\n");
            printf("[1] - Inserir \n");
            printf("[2] - Remover \n");
            printf("[3] - Listar \n");
            printf("[4] - Limpar \n");
            printf("[-1] - Sair \n");
            printf("opcao: ");
            scanf("%d",&opcao);

            switch(opcao){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            listaElementos();
            break;
        case 4:
            clear();
            break;
        case -1:
            break;
        default:
            printf("\nopcao invalide.");
            }

    }while(opcao!=-1);


return 0;
}
