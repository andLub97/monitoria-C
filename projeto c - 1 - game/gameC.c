#include<stdio.h>
#include<stdlib.h>

typedef struct{

    int dificuldade;
    int valor1, valor2;
    int operacao;
    int resultado;

} Calcular;


void jogar();
void mostrarInfo(Calcular calc);

int pontos = 0;


int main(){

    //chamado apenas uma vez
    srand(time(NULL));

    jogar();

return 0;
}

void jogar(){

    //sera implementado
}

void mostrarInfo(Calcular calc){

    //sera implementado
}

int somar(int resposta, Calcular calc){

    //sera implementado
}

int diminuir(int resposta, Calcular calc){
//sera implementado
}

int multiplicar(int resposta, Calcular calc){
    //sera implementado

}
