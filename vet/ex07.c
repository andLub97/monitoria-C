#include<stdio.h>


int main(){

        int vetor[10];

        for(int i = 0; i < 10; i++){
            printf("valor[%d]: ",i+1);
            scanf("%d",&vetor[i]);
        }
        int maior = vetor[0];
        int posicao = 0;
        for(int i = 0; i < 10; i++){
            if(vetor[i]>maior){
                maior = vetor[i];
                posicao = i;
            }
        }

        for(int i = 0; i < 10; i++){
            printf("\n%d\n ",vetor[i]);
        }
        printf("\n\nmaior valor: %d",maior);
        printf("\n\nposicao: %d",posicao);
return 0;
}
