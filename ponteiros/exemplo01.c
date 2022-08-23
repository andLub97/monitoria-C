#include<stdio.h>

int main(){

    int x = 1;
    printf("%d\n",x);
    printf("%d\n",&x);

    int y = &x;
    printf("%d\n",y);
    y = (int*)x;
    printf("%d\n",y);


return 0;
}
