#include <stdio.h>
#include <stdlib.h>

typedef enum type{
    alimento,
    bebida,
    eletronico
}Tipo;

typedef struct {
    char nome[50];
    float preco;
    Tipo tip;
}Produto;

void preencher(Produto *p, int dec){

    //Função que preenche os valores das variaveis do tipo pessoa (struct)//

    printf("Qual o nome do produto?\n");
    scanf(" %[^\n]", p->nome);
    
    printf("Qual o seu preço?\n");
    scanf(" %f", &p->preco);

    printf("Qual seu tipo (alimento = 0, bebida = 1, eletronico = 2): \t");
    scanf("%d", &p->tip);

}

int main(){

    Produto *p = malloc(sizeof(Produto));
    int cont;

    preencher(p, cont);

    printf("nome: %s\n", p->nome);
    printf("preço: %.2f\n", p->preco);
    printf(p->tip == 0 ? (p->tip == 1 ? "Bebida" : "Alimento") : "Eletronico");

    free(p);

    return 0;

}