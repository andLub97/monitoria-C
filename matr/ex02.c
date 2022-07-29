#include <stdio.h>

int main(){

    int mat[5][5];

    for(int i=0;i<5;i++){
        for(int j = 0; j<5;j++){
            if(i==j){
                mat[i][j] = 1;
            }else{
            mat[i][j] =0;
            }
        }
    }
    for(int x = 0; x< 1; x++){
        for(int y = 0; y<5;y++){
            printf("%d\t",mat[0][y]);
        }
    }
    printf("\n");
    for(int x = 1; x< 2; x++){
        for(int y = 0; y<5;y++){
            printf("%d\t",mat[1][y]);
        }
    }
        printf("\n");

    for(int x = 2; x< 3; x++){
        for(int y = 0; y<5;y++){
            printf("%d\t",mat[2][y]);
        }
    }
        printf("\n");

    for(int x = 3; x< 4; x++){
        for(int y = 0; y<5;y++){
            printf("%d\t",mat[3][y]);
        }
    }
        printf("\n");

    for(int x = 4; x< 5; x++){
        for(int y = 0; y<5;y++){
            printf("%d\t",mat[4][y]);
        }
    }

return 0;
}
