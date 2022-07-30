#include<stdio.h>

enum dias{
    segunda,//0
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo//6

};

int main(){
    enum dias d1, d2;

    d1 = sabado;
    d2 = 5;

    if(d1==d2){
        printf("dias iguais\n");
    }


return 0;
}
