#include <stdio.h>
#include <stdlib.h>

typedef enum{
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
    scanf(" %d", &p->idade);

    printf("Qual seu genero (M = 1, F = 2): \t");
    scanf("%d", &dec);

    
    if (dec == 1)
    {
        /* code */
        printf("seu genero é Masculino\n");
        p->gen = MASCULINO;
    }
    else if (dec == 2)
    {
        printf("Seu genero é Feminino\n");
        p->gen = FEMININO;
    }
    else{
        printf("digite um numero valido\n");
    }

}

int main(){

    Pessoa *p = malloc(sizeof(Pessoa));
    int cont;

    preencher(p, cont);

    printf("nome: %s\n", p->nome);
    printf("idade: %d\n", p->idade);
    printf("O genero é MASCULINO = 0 ou FEMININO = 1\nSeu genero é: %d", p->gen);

    free(p);

    return 0;

}