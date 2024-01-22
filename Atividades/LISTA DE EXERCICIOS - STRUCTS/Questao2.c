#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char nome[70];
    int id;
    int idade;

}pessoa;

void preencher(pessoa ** matriz, int qtd){

    for (int i = 0; i < qtd; i++)
    {
        /* Coleta do nome da pessoa */
        printf("Qual seu Nome?\n");
        scanf(" %[^\n]", matriz[i]->nome);

        /* Coleta do id da pessoa */
        printf("Qual seu id?\n");
        scanf("%d", &matriz[i]->id);

        /* Coleta da idade da pessoa */
        printf("Qual sua idade?\n");
        scanf("%d", &matriz[i]->idade);
    }
    

}

void mostrar(pessoa ** matriz, int qtd){

    for (int i = 0; i < qtd; i++)
    {
        /* amostra do nome da pessoa */
        printf("seu Nome %d: %s\n", i, matriz[i]->nome);
        
        /* amostra do id da pessoa */
        printf("seu id %d: %d\n", i, matriz[i]->id);
        
        /* amostra da idade da pessoa */
        printf("sua idade %d: %d\n", i, matriz[i]->idade);
        
    }

}

void alterar(pessoa ** matriz, int num){

    printf("Digite a nova idade dessa pessoa: ");
    scanf("%d", &matriz[num - 1]->idade);

}

void comparar(pessoa ** matriz, int qtd){

    int maior = 0;
    int menor = 0;

    for (int i = 0; i < qtd - 1; i++)
    {
        /* code */
        if (matriz[i]->idade > matriz[i + 1]->idade)
        {
            maior = i;

            menor = i + 1;
        }
        if(matriz[i + 1]->idade > matriz[i]->idade)
        {
            maior = i + 1;

            menor = i;
        }
    }
    
    printf("Maior idade: %d\n", matriz[maior]->idade);
    printf("Maior idade nome: %s\n", matriz[maior]->nome);
    printf("Menor idade : %d\n", matriz[menor]->idade);
    printf("Menor idade nome: %s\n", matriz[menor]->nome);

}

void liberarMatriz(pessoa ***matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free((*matriz)[i]);  // Libera cada linha
    }
    free(*matriz);  // Libera o array de ponteiros para as linhas
    *matriz = NULL;  // Define o ponteiro para a matriz como NULL para evitar acesso acidental
}

int main(){

    int qtdFunc;
    int NumFunc;
    char decisao;

    printf("Quantas pessoas você deseja inserir: ");
    scanf("%d", &qtdFunc);

    //criando a matriz que armazenará todos os dados de todos os pessoa
    pessoa ** func = (pessoa **) malloc (qtdFunc * sizeof(pessoa*));
    for (int i = 0; i < qtdFunc; i++)
    {
        /* code */
        func[i] = (pessoa *) malloc (3 *sizeof(pessoa));
    }

    if(func == NULL){
        printf("Exception has occured: Memory Allocation Error");
        exit(1);
    }
    else {
        printf("Memoria Alocada\n");
    }

    //preechendo os dados das pessoas
    printf("Preencha os dados abaixo: \n");
    preencher(func, qtdFunc);   

    printf("Deseja visualizar os dados s/n?\n");
    scanf(" %c", &decisao);

    if (decisao == 's')
    {
        //mostrando os dados das pessoas
        mostrar(func, qtdFunc);
        decisao = 'n';
    }
    else {
        printf("Ok\n");
        decisao = 'n';
    }

    printf("deseja alterar a idade de alguma pessoa s/n?\n");
    scanf(" %c", &decisao);

    if (decisao == 's')
    {
        //preechendo o numero da pessoa especifico e depois alterar a idade
        printf("Qual a pessoa?\nPessoa numero ");
        scanf(" %d", &NumFunc);
        alterar(func, NumFunc);
        NumFunc = 0;
        decisao = 'n';
    }
    else{
        printf("Ok\n");
        decisao = 'n';
    }

    printf("deseja comparar as idades das pessoa s/n?\n");
    scanf(" %c", &decisao);

    if (decisao == 's')
    {
        //comparar as idades das pessoas dentro da matriz e imprimir o nome e a idade da maior e menor idade
        comparar(func, qtdFunc);
    }
    else{
        printf("Ok\n");
    }

    //liberar os espaços de memoria da matriz func
    liberarMatriz(&func, qtdFunc);

    return 0;
    
}