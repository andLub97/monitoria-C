#include <stdio.h>

int main(){

    int n;
    printf("digite um valor: ");
    scanf("%d",&n);
    int soma = 0;

    for(int i = 0; i <= n; i++){
        soma+=i;
    }
    printf("%d",soma);

return 0;
}
