#include<stdio.h>

int main(){

    int valores[6];

    for(int i = 0;i<6;i++){
        printf("valor[%d]: ",i+1);
        scanf("%d",&valores[i]);
    }
    for(int j = 5; j>=0; j--){
        printf("\n%d",valores[j]);
    }

return 0;
}
