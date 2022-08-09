#include<stdio.h>
#define PI 1000.0
#ifndef PI
    #define PI 3.14
#endif


int main(){
    #ifdef PI
        printf("\nPI: %.2f",PI);
    #endif // PI
return 0;
}
