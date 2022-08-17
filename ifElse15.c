#include<stdio.h>

int main(){

    int v;
    printf("numero: ");
    scanf("%d",&v);

    switch(v){
    case 1:
        printf("domingo\n");
        break;
    case 2:
        printf("\nsegunda");
        break;
    case 3:
        printf("\nterca");
        break;
    case 4:
        printf("quarta\n");
        break;
    case 5:
        printf("quinta\n");
        break;
    case 6:
        printf("sexta\n");
        break;
    case 7:
        printf("sabado\n");
        break;
    default:
        printf("entrada invalida");
    }

return 0;
}
