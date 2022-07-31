#include<stdio.h>

int main(){

    int nInteiro = 10;
    int *pontInt = &nInteiro;
    int x = *pontInt;

    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",nInteiro);
    printf("%d\n",&nInteiro);

return 0;
}
