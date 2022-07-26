#include<stdio.h>
#include<math.h>

int main(){
    float valor;
    printf("valor: ");
    scanf("%f",&valor);

    if(valor>0){
        printf("\nraiz de %.2f: %.2f",valor,sqrt(valor));
    }else if(valor<0){
    printf("\nvalor ao quadrado: %.2f\n",valor*valor);
    }else{
    printf("\nzero eh neutro\n");
    }
}
