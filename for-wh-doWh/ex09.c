#include<stdio.h>

int main(){

     int valor;
     printf("\ndigite um valor: ");
     scanf("%d",&valor);

     for(int i = valor; i > 0; i--){
        if(i%2!=0){
            printf("\n%d",i);
        }
     }


return 0;
}
