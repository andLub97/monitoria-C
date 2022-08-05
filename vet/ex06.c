#include<stdio.h>

int main(){

    int v[10];
    int maior;
    int menor;

    for(int i = 0; i <10; i++){
        printf("\nValor %d: ",i+1);
        scanf("%d",&v[i]);
    }
    maior = v[0];
    menor = maior;
    for(int i = 0; i < 10; i++){
        if(v[i]>maior){
            maior = v[i];
        }
        }

    for(int i = 0; i < 10; i++){
        if(v[i]<menor){
            menor = v[i];
        }
        }

    printf("\nMaior valor; %d\n",maior);
    printf("\nMenor valor; %d\n",menor);

return 0;
}
