#include <stdio.h>
#include <time.h>

int main(){

    //pulsos de clock desde o inicio do programa
    long int inicio_t, fim_t, total_t, i;

    inicio_t = clock();

    printf("realizar um loop grande, inicio_t = %ld\n\n",inicio_t);
    for(int i=0; i < 1000000000; i++ ){};

    fim_t = clock();
    printf("fim do loop, fim_t = %ld\n\n",fim_t);

    total_t = (double)(fim_t-inicio_t)/CLOCKS_PER_SEC;

    printf("\n\nclocks por segundo: %ld\n\n",CLOCKS_PER_SEC);

    printf("tempo total usado pela cpu: %ld\n\n", total_t);


return 0;
}
