/*
André Lubawski
13/08/2022
*/

#include<stdio.h>

int main(){

    int n;
    int x;
    int maior;
    int qtd = 1;

    printf("quantidade de valores: ");
    scanf("%d",&n);

    printf("\n\nvalor: ");
    scanf("%d",&maior);

    for(int i = 1; i < n; i++){
        printf("valor: ");
        scanf("%d",&x);
        if(x==maior){
            qtd+=1;
        }else if(x>maior){
            qtd = 0;
            maior = x;
            qtd+=1;
        }
        }

        printf("\nmaior: %d\n",maior);
        printf("\nfoi digitado %d vezes\n",qtd);

return 0;
}
