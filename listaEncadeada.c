#include<stdio.h>
#include <stdlib.h>

struct st_node{
    int valor;
    struct st_node *prox;
};

typedef struct st_node node;


int vazia(node *le){
    if(le->prox == NULL){
        return 1;
    }else{
    return 0;
    }
}

void inicia(node *le){
    le->prox = NULL;
}
void libera(node *le){
    if(!vazia(le)){
        node *proximoNode, *atual;
        atual = le -> prox;
        while(atual != NULL){
            proximoNode = atual -> prox;
            free(atual);
            atual = proximoNode;
        }
    }
}

void exibe(node *le){
if(vazia(le)){
        printf("\nlista vazia\n");
        return;
}
node *tmp;
tmp=le->prox;
while(tmp!=NULL){
    printf("%d  ", tmp->valor);
    tmp=tmp->prox;
}
printf("\n\n");
}
void insereInicio(node *le){
    node *novo = (node*)malloc(sizeof(node));
    if(!novo){
        printf("sem memoria disponivel");
        exit(1);
    }
    printf("Informe o vaalor: ");
    scanf("%d",&novo->valor);

    node *oldHead = le -> prox;
    le->prox = novo;
    novo->prox = oldHead;
}
void insereFim(node *le){
node *novo = (node*)malloc(sizeof(node));
    if(!novo){
        printf("sem memoria\n");
        exit(1);
    }
printf("informe o valor: ");
scanf("%d", &novo->valor);
novo->prox=NULL;

if(vazia(le)){
le->prox=novo;}else{
node *tmp = le->prox;
while(tmp->prox!=NULL){
    tmp=tmp->prox;
}
tmp->prox=novo;
}

}

void opcao(node *le, int op){
switch(op){
   case 0:
    libera(le);
    break;
   case 1:
    exibe(le);
    break;
   case 2:
    insereInicio(le);
    break;
   case 3:
    insereFim(le);
    break;
   case 4:
    inicia(le);
    break;
   default:
    printf("comando invalido\n\n");

    }}
int menu(){
    int opt;
    printf("escolha a opcao: \n");
    printf("0 : sair\n\n");
    printf("1 : exibir\n\n");
    printf("2 : add node no inicio\n\n");
    printf("3 : add node no fim\n\n");
    printf("4 : zerar lista\n\n");
    printf("opcao: ");
    scanf("%d",&opt);

    return opt;

}


int main(){

    node *le = (node*)malloc(sizeof(node));
    if(!le){
        printf("sem memoria disponivel");
        exit(1);
    }
    inicia(le);
    int opt;
    do{
        opt = menu();
        opcao(le, opt);
    }while(opt);
    free(le);
return 0;
}
