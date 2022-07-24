#include<stdio.h>
#include<math.h>

int main(){
    float valor;
    printf("valor: ");
    scanf("%f",&valor);

    if(valor>0){
        printf("\nraiz de %.2f: %.2f",valor,sqrt(valor));
    }else if(valor<0){
    printf("\nvalor invalido\n");
    }else{
    printf("\nzero eh neutro\n");
    }
}
