#include<stdio.h>
 int pilha[10]={0};
    int topo = 0;

    void lista_elementos(){
    printf("\npilha atual\n");
    for(int i = 0; i<10; i++){
        printf(".");
        printf("|%d|",pilha[i]);
        printf(".");
    }
    printf("\ntopo: %d ",topo);
    printf("\n\n");
    }


    void push(){
    int val;
    printf("valor: ");
    scanf("%d",&val);
    if(topo<10){
        pilha[topo] = val;
        topo+=1;
        lista_elementos();
    }else{
    printf("pilha cheia \n");
    }
    }
    void pop(){
    if(topo>=0){
        pilha[topo-1] = 0;
        topo-=1;
        lista_elementos();
    }else{
    printf("pilha vazia \n");
    }
    }
    void clear(){
    for(int i=0; i<10;i++){
        pilha[i]=0;
    }
        topo = 0;
    }

int main(){

    int opcao = 0;
    do{
        printf("selecione a opcao: \n\n");
        printf("[1] - inserir");
        printf("[2] - remover");
        printf("[3] - listar");
        printf("[4] - limpar");
        printf("[-1] - sair");
        printf("opcao: ");
        scanf("%d",&opcao);

        switch(opcao){
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        lista_elementos();
        break;
    case 4:
        clear();
        break;
    case -1:
        break;
        }


    }while(opcao != -1);

return 0;
}
