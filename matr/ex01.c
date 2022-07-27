#include<stdio.h>

int main(){

    int A[4][4];

    int soma = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("\nvalor[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(A[i][j]>10){
                soma+=1;
            }
        }
    }
    printf("\n\nvalores maiores que 10: %d\n",soma);


return 0;
}
