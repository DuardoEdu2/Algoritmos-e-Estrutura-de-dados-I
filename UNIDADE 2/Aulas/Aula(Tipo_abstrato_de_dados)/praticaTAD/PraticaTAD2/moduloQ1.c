#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moduloQ1.h"

struct ingresso
{
    /* data */
    char local[50];
    char atracao[50];
    float preco;

};

void liberarMatriz(Ingresso** ingressos, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        free(ingressos[i]);
        printf("Liberou a memoria, ");
    }
    free(ingressos);
}

void preencher(Ingresso ** ing, int qtd){

    for (int i = 0; i < qtd; i++)
    {
        /* code */
        printf("-----------------------------------------------------------------\n");
        printf("Atração do ingresso:\t");
        scanf(" %[^\n]", ing[i]->atracao);

        printf("Local da sua atração:\t");
        scanf(" %[^\n]", ing[i]->local);

        printf("Preço do seu ingresso:\t");
        scanf("%f", &ing[i]->preco);
    }
    
    

}

void imprimi(Ingresso ** ing, int qtd){
    for (int i = 0; i < qtd; i++)
    {
        /* code */
        printf("=================================================================\n");
        printf("Atração: %s\nLocal: %s\nPreco: %.2f\n", ing[i]->atracao, ing[i]->local, ing[i]->preco);
    }
}

void mudar_preco(Ingresso ** ing, float valor, int spc){

        /* code */
        ing[spc]->preco = valor; 

}

void comparar_value(Ingresso ** ing, int qtd){

    int maior = 0;
    int menor = 0;

    for (int i = 0; i < qtd - 1; i++)
    {
        /* code */
        if (ing[i]->preco > ing[i + 1]->preco)
        {
            maior = i;

            menor = i + 1;
        }
        if(ing[i + 1]->preco > ing[i]->preco)
        {
            maior = i + 1;

            menor = i;
        }
    }
    
    printf("Maior preco: %.2f\n", ing[maior]->preco);
    printf("Menor preco:%.2f\n", ing[menor]->preco);
}