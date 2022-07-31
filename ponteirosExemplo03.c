#include<stdio.h>
int main(){

    int n;
    int *p;

    printf("valor: ");
    scanf("%d",&n);

    p = &n;

    printf("\nnumero informado: %d\n",n);
    printf("endereco: %d\n",&n);
    printf("endereco real: %p\n",&p);

return 0;
}
