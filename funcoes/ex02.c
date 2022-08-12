#include<stdio.h>

void data(int dia, int mes, int ano){

    const char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril","Maio", "Junho",
                            "Julho", "Agosto","Setembro", "Outubro", "Novembro", "Dezembro"};

	printf("data: %d de %s de %d\n\n", dia,meses[mes-1],ano);

}

int main(){
        //o programa pode ser melhorado com tratamento de erros
    int d, m, a;
    printf("\ndigite apenas numeros: ");
    printf("\ndia: ");
    scanf("%d",&d);
    fflush(stdin);
    printf("mes: ");
    scanf("%d",&m);
    fflush(stdin);
    printf("ano: ");
    scanf("%d",&a);


   data(d,m,a);



return 0;
}
