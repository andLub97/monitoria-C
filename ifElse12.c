#include<stdio.h>
#include<math.h>

int main(){

    int x;
    printf("valor: ");
    scanf("%d",&x);

    if(x>0){
        printf("%.2f",log10(x));
    }
    else{
        printf("numero invalido");
    }

return 0;
}
