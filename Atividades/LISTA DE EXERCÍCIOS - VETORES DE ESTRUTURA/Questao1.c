#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ingresso
{
    /* data */
    char local[50];
    char atração[50];
    float preco;

}Ingresso;

void preencher(Ingresso * ing){

    printf("Atração do ingresso:\t");
    scanf(" %[^\n]", ing->atração);
    
    printf("Local da sua atração:\t");
    scanf(" %[^\n]", ing->local);

    printf("Preço do seu ingresso:\t");
    scanf("%d", ing->preco);

}


int main(void){

    Ingresso ing = (Ingresso*)malloc(sizeof(Ingresso));

    return 0;

}