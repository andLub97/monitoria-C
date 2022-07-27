#include<stdio.h>

int main(){

    int vetor[6];

    for(int i=0;i<6;i++){
        printf("\nvalor[%d] :",i+1);
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<6;i++){
        printf("\n\n%d\n",vetor[i]);
    }


return 0;
}
