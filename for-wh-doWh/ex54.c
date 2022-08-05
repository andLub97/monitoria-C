#include<stdio.h>

int main(){

    int soma = 0;
    int n;

    printf("digite um valor: ");
    scanf("%d",&n);

    for(int i = n; i > 0; i--){
            if(n%i==0){
                soma+=1;
            }
        }

if(soma==2){
    printf("\nPRIMO");
}
else{
    printf("\nNAOPRIMO");
}

return 0;
}
