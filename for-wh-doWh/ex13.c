#include<stdio.h>
int main(){

    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }

return 0;
}
