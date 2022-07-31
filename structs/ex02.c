#include<stdio.h>

int main(){

    struct st_info{

    char nome[100];
    int idade;
    char endereco[100];
    }pessoa1;

    printf("\nNome: ");
    fgets(pessoa1.nome,100,stdin);
    printf("\nIdade: ");
    scanf("%d",&pessoa1.idade);
    fflush(stdin);
    printf("\nEndereco: ");
    fgets(pessoa1.endereco,100,stdin);

    printf("\n\n\nNome: %s\n\n",pessoa1.nome);
    printf("\nIdade: %d\n\n",pessoa1.idade);
    printf("\nEndereco %s\n\n",pessoa1.endereco);


}
