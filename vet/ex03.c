#include<stdio.h>

int main(){

    int vetorA[10];
    int vetorB[10];


    for(int i=0;i<10;i++){
        printf("\nvalor[%d] :",i+1);
        scanf("%d",&vetorA[i]);
    }

    for(int j=0;j<10;j++){
        vetorB[j]=vetorA[j]*vetorA[j];
    }

    printf("\n#############\n");
    for(int x=0;x<10;x++){
        printf("%d ",vetorB[x]);
    }


return 0;
}
