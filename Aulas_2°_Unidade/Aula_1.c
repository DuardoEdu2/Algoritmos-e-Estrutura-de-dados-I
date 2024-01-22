#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
}Pessoa;

void preencher(Pessoa * p){

    printf("Qual seu nome?\n");
    scanf(" %[^\n]", p->nome);
    
    printf("Qual a sua idade?\n");
    scanf(" %d", &p->idade);

}

int main(){

    Pessoa *p = malloc(sizeof(Pessoa));

    preencher(p);

    printf("nome: %s\n", p->nome);
    printf("idade: %d\n", p->idade);

    free(p);

    return 0;

}