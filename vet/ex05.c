#include<stdio.h>

int main(){

    int v[10];
    int soma=0;
    for(int i = 0; i < 10; i++){

        printf("\nvalor[%d]: ",i+1);
        scanf("%d",&v[i]);
        if(v[i]%2==0){
            soma+=1;
        }
    }
    printf("\n\nvalores par: %d",soma);
return 0;
}
