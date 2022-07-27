#include<stdio.h>

int main(){

    int vet[8];

    for(int i=0;i<8;i++){
        printf("\nvalor[%d]: ",i+1);
        scanf("%d",&vet[i]);
    }

    int x,y;

    printf("\nprimeiro indice: ");
    scanf("%d",&x);
    printf("\nsegundo indice: ");
    scanf("%d",&y);

    int soma = vet[x] + vet[y];
    printf("\nsoma: %d",soma);


return 0;
}
