#include <stdio.h>
#include <string.h>

union pessoa{
char nome[100];
int idade;
};


int main(){

    union pessoa pes;
    strcpy(pes.nome, "angelina jolie");
    printf("dados de %s\n",pes.nome);

    pes.idade = 39;
    printf("\nEla tem %d anos", pes.idade);

    printf("\n\na variavel 'pes' esta ocupando %ld bytes em memoria",sizeof(pes));

return 0;
}
