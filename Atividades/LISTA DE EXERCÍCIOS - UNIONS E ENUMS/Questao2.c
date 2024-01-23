#include <stdio.h>
#include <stdlib.h>

typedef union type{
    int alimento;
    int bebida;
    int eletronico;
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

    printf("Qual seu tipo (alimento = 1, bebida = 2, eletronico = 3): \t");
    scanf("%d", &dec);

    
    if (dec == 1)
    {
        /* code */
        p->tip.alimento = 1;
    }
    else if (dec == 2)
    {
        p->tip.bebida = 2;
    }
    else if (dec == 3)
    {
        p->tip.eletronico = 3;
    }
    else{
        printf("digite um numero valido\n");
    }

}

int main(){

    Produto *p = malloc(sizeof(Produto));
    int cont;

    preencher(p, cont);

    printf("nome: %s\n", p->nome);
    printf("preço: %.2f\n", p->preco);
    printf("Alimento: 1, Bebida: 2, Eletronico: 3\nO tipo de alimento é %d", p->tip);

    free(p);

    return 0;

}