
#include <stdio.h>
#include <stdlib.h>

typedef enum mes{
    JANEIRO, FEVEREIRO, MARC, ABRIL, MAIO,JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
}Mes;

typedef struct data {
    int dia;
    int ano;
    Mes mes_ano;
}Data;

void preencher(Data * data){

    printf("Que dia é: ");
    scanf("%d", &data->dia);

    printf("Que Mês é: ");
    scanf("%d", &data->mes_ano);

    printf("Que ano é: ");
    scanf("%d", &data->ano);

}

void imprimir(Data * data){

    printf("A data de hoje é: %d/%d/%d", data->dia, data->mes_ano, data->ano);

}

int main(void){
    Data data;

    preencher(&data);
    imprimir(&data);

}