//receber dois numeros e mostrar qual eh o maior
#include<stdio.h>

int main(){

    int n1,n2;
    printf("Primeiro valor: ");
    scanf("%d",&n1);
    printf("Segundo valor: ");
    scanf("%d",&n2);

    if(n1>n2){
        printf("\n%d eh maior que %d\n",n1,n2);
    }else if(n2>n1){
        printf("\n%d eh maior que %d\n",n2,n1);
    }else{
        printf("\nvalores iguais\n");
    }

}
