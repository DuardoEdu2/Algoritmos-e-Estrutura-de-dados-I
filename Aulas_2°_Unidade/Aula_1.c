#include <stdio.h>
#include <stdlib.h>

//estrutura para armazenar um documento por vez (CPF ou RG)
typedef union pessoadoc
{
    /* data */
    char rg[20];
    char cpf[20];
}Documentos;

typedef struct {
    char nome[50];
    int idade;
    Documentos doc;
}Pessoa;

void preencher(Pessoa * p, int dec){

    //Função que preenche os valores das variaveis do tipo pessoa (struct)//

    printf("Qual seu nome?\n");
    scanf(" %[^\n]", p->nome);
    
    printf("Qual a sua idade?\n");
    scanf(" %d", &p->idade);

    printf("Que documento você deseja usar (1 = CPF, 2 = RG): \t");
    scanf("%d", &dec);

    if (dec == 1)
    {
        /* code */
        printf("Digite o seu documento (CPF): \t");
        scanf(" %s", p->doc.cpf);
    }
    else if (dec == 2)
    {
        printf("Digite o seu documento (RG): \t");
        scanf(" %s", p->doc.rg);
    }
    else{
        printf("digite um numero valido");
    }

}

int main(){

    Pessoa *p = malloc(sizeof(Pessoa));
    int cont;

    preencher(p, cont);

    printf("nome: %s\n", p->nome);
    printf("idade: %d\n", p->idade);
    printf("CPF: %s\nRG: %s", p->doc.cpf, p->doc.rg);

    free(p);

    return 0;

}