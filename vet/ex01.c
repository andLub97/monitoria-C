#include<stdio.h>

int main(){

    int A[6]={1,0,5,-2,-5,7};

    int s = A[0]+A[1]+A[5];
    printf("\nSoma: %d \n\n\n",s);

    A[4] = 100;

    for(int i=0;i<6;i++){
        printf("[%d] : %d\n",i,A[i]);
    }


return 0;
}
