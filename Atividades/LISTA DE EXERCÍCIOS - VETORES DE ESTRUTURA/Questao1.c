#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ingresso
{
    /* data */
    char local[50];
    char atracao[50];
    float preco;

}Ingresso;

void preencher(Ingresso * ing){

    printf("Atração do ingresso:\t");
    scanf(" %[^\n]", ing->atracao);

    printf("Local da sua atração:\t");
    scanf(" %[^\n]", ing->local);

    printf("Preço do seu ingresso:\t");
    scanf("%f", &ing->preco);

}

void imprimi(Ingresso * ing){
    printf("Atração: %s\nLocal: %s\nPreco: %.2f", ing->atracao, ing->local, ing->preco);
}


int main(void){

    Ingresso *ing = (Ingresso*) malloc (sizeof(Ingresso));

    preencher(ing);
    imprimi(ing);

    free(ing);

    return 0;

}