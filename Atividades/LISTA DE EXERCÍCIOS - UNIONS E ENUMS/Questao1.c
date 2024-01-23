#include <stdio.h>
#include <stdlib.h>

typedef enum genero{
    MASCULINO,
    FEMININO
}Genero;

typedef struct {
    char nome[50];
    int idade;
    Genero gen;
}Pessoa;

void preencher(Pessoa *p, int dec){

    //Função que preenche os valores das variaveis do tipo pessoa (struct)//

    printf("Qual seu nome?\n");
    scanf(" %[^\n]", p->nome);
    
    printf("Qual a sua idade?\n");
    scanf("%d", &p->idade);

    printf("Qual seu genero (M = 0, F = 1): \t");
    scanf("%d", &p->gen);
}

void imprimir(Pessoa * p){

    printf("nome: %s\n", p->nome);
    printf("idade: %d\n", p->idade);
    printf("Genero: %s", p->gen == MASCULINO ? "Masculino" : "Feminino");

}

int main(){

    Pessoa *p = malloc(sizeof(Pessoa));
    int cont;

    preencher(p, cont);

    imprimir(p);

    free(p);

    return 0;

}