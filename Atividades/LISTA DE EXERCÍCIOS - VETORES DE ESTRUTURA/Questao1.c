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
    printf("Atração: %s\nLocal: %s\nPreco: %.2f\n", ing->atracao, ing->local, ing->preco);
}

void mudar_preco(Ingresso * ing, float valor){

    ing->preco = valor;

}


int main(void){

    Ingresso *ing = (Ingresso*) malloc (sizeof(Ingresso));
    float value;
    char dec[5];

    preencher(ing);
    imprimi(ing);

    printf("deseja mudar o valor do preço do ingresso (s/n)?\n");
    scanf(" %s", &dec);

    if (strcmp(dec, "sim") || strcmp(dec, "s"))
    {
        /* code */
        printf("Digite o novo valor do preço:\t");
        scanf("%f", &value);

        mudar_preco(ing, value);
    }
    else if (strcmp(dec, "nao") || strcmp(dec, "n"))
    {
        /* code */
        printf("Ok");
    }

    printf("%f", ing->preco);
    

    free(ing);

    return 0;

}