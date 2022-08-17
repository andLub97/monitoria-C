#include<stdio.h>
int main(){

    int v;
    int r;
    int soma = 0;
    printf("valor: ");
    scanf("%d",&v);

    if(v>0){

    while(v>0){

       r = v % 10;
       v = (v - r)/10;
       soma+=r;

    }

    }else{
        printf("Numero invalido\n");
    }

    printf("soma: %d",soma);
return 0;
}
