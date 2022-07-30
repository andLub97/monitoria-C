#include <stdio.h>
#include <string.h>

struct st_contato{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];
};
struct st_agenda{
    struct st_contato contatos[100];
}agenda;


int main(){

    for(int i = 0; i < 2; i++){

    printf("Informe o nome: ");
    fgets(agenda.contatos[i].nome, 100, stdin);

    printf("Informe o telefone: ");
    fgets(agenda.contatos[i].telefone, 20, stdin);

    printf("Informe o email: ");
    fgets(agenda.contatos[i].email, 100, stdin);

    printf("Informe o ano de nascimento: ");
    scanf("%d", &agenda.contatos[i].ano_nascimento);
    getchar();


    }

    for(int i=0; i<2;i++){
        printf("\n\nDados do contato %d\n\n",i+1);
    printf("nome: %s\n",agenda.contatos[i].nome);
    printf("telefone: %s\n",agenda.contatos[i].telefone);
    printf("email: %s\n",agenda.contatos[i].email);
    printf("Nascimento: %d\n",agenda.contatos[i].ano_nascimento);
    }
return 0;
}
