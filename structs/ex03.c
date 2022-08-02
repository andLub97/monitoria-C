#include<stdio.h>

struct st_aluno{

    char nome[50];
    char curso[20];
    int matricula;

}aluno[5];

int main(){

    for(int i = 0; i < 5; i++){

        printf("\nNome: ");
        scanf("%s",&aluno[i].nome);
        printf("\nCurso: ");
        scanf("%s",&aluno[i].curso);
        printf("\nMatricula: ");
        scanf("%d",&aluno[i].matricula);

    }
    printf("\n#####\n");
    for(int i = 0; i  < 5; i++){
            printf("aluno %d\n",i+1);
        printf("%s\n",aluno[i].nome);
        printf("%s\n",aluno[i].curso);
        printf("%d\n",aluno[i].matricula);
        printf("\n");

    }
return 0;
}
