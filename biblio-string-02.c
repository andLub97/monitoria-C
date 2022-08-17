#include<stdio.h>
#include<string.h>

int main(){

    char str1[20], str2[20], str3[20];

    strcpy(str1, "quint");
    strcpy(str2, "quinta");

    strcpy(str3, "andre@gmail");


    if(strcmp(str1,str2)){
        printf("nao sao iguais");
    }else{
    printf("iguais");}


    //localizar primeira ocorrencia de caractere   strchr
    char letra = '@';
    char *ret = strchr(str3, letra);

    printf("\nretorno: %s\n",ret);
    printf("\nuser: %s\n\n",strtok(str3,"@"));

    printf("\n\ntamanho da string user: %d\n\n", strlen("andre"));

return 0;
}
