#include <stdio.h>
#include <stdlib.h>

//UMA UNION É COMO STRUCT SÓ QUE COM MAIS CONTROLE DE MEMORIA.
//NA UNION ELA PODE TER UMA LISTA DE VARIAVEIS
//MAS ELA IRÁ ARMAZENAR APENAS UM DOS VALORES DAS VARIAVEIS NA MEMORIA.

//estrutura para armazenar um documento por vez (CPF ou RG)
typedef union pessoadoc
{
    /* data */
    char rg[15];
    char cpf[15];
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
        scanf(" %[^\n]", p->doc.cpf);
    }
    else if (dec == 2)
    {
        printf("Digite o seu documento (RG): \t");
        scanf(" %[^\n]", p->doc.rg);
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