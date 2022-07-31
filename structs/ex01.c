#include<stdio.h>

struct st_horario{

    int hora,minutos,segundos;

};
struct st_data{

    int dia,mes,ano;

};
struct st_compromisso{

    struct st_data datas[1];
    struct st_horario horarios[1];
    char compr[100];

}compromisso;

int main(){


    printf("Informe o dia: ");
    scanf("%d", &compromisso.datas[1].dia);
    getchar();
    printf("Informe o mes: ");
    scanf("%d", &compromisso.datas[1].mes);
    getchar();
    printf("Informe o ano: ");
    scanf("%d", &compromisso.datas[1].ano);
    getchar();
    printf("Informe a hora: ");
    scanf("%d", &compromisso.horarios[1].hora);
    getchar();
    printf("Informe os minutos: ");
    scanf("%d", &compromisso.horarios[1].minutos);
    getchar();
    printf("Informe os segundos: ");
    scanf("%d", &compromisso.horarios[1].segundos);
    getchar();

    printf("Informe o compromisso: ");
    fgets(compromisso.compr, 100, stdin);
    fflush(stdin);
    printf("\n\n####################\n\n");
    printf("\ndia %d\n",compromisso.datas[1].dia);
    printf("\nmes %d\n",compromisso.datas[1].mes);
    printf("\nano %d\n",compromisso.datas[1].ano);
    printf("\nhora %d\n",compromisso.horarios[1].hora);
    printf("\nminutos %d\n",compromisso.horarios[1].minutos);
    printf("\nsegundos %d\n",compromisso.horarios[1].segundos);
    printf("\ncompromisso: %s\n",compromisso.compr);

    //existe um erro no codigo


return 0;
}
