#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ingresso
{
    /* data */
    char local[50];
    char atracao[50];
    float preco;

}Ingresso;

void liberarMatriz(Aluno** alunos, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        free(alunos[i]);
        printf("Liberou a memoria, ");
    }
    free(alunos);
}

void preencher(Ingresso ** ing, int qtd){

    for (int i = 0; i < qtd; i++)
    {
        /* code */
        printf("-----------------------------------------------------------------");
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
        printf("-----------------------------------------------------------------");
        printf("Atração: %s\nLocal: %s\nPreco: %.2f\n", ing[i]->atracao, ing[i]->local, ing[i]->preco);
    }
}

void mudar_preco(Ingresso ** ing, float valor, int qtd, int dec){

        /* code */
        ing[dec]->preco = valor; 

}

int main(void){

    //Ingresso *ing = (Ingresso*) malloc (sizeof(Ingresso));
    float value;
    char dec[5];
    int qtd;
    int spc;

    printf("Quantos ingressos voce deseja realizar: ");
    scanf("%d", &qtd);

    Ingresso **ing = (Ingresso**) malloc(qtd * sizeof(Ingresso*));

        if (ing == NULL) {
            fprintf(stderr, "Erro ao alocar a matriz de Alunos\n");
            return 1; // Sair com erro
        }
            for (int i = 0; i < qtd; i++)
            {
            /* code */
                ing[i] = (Ingresso*)malloc(sizeof(Ingresso));
                    if (ing[i] == NULL) {
                        fprintf(stderr, "Erro ao alocar a estrutura Aluno[%d]\n", i);
                        //liberarMatriz(ing, qtd); // Liberar a memória alocada antes de sair com erro
                        return 1; // Sair com erro
                    }
            }

    preencher(ing, qtd);
    imprimi(ing, qtd);

    printf("deseja mudar o valor do preço do ingresso (s/n)?\n");
    scanf(" %s", &dec);

    if (strcmp(dec, "sim") || strcmp(dec, "s"))
    {
        /* code */
            if (qtd > 1)
            {
                /* code */
                printf("Qual dos ingressos voce quer alterar");
                scanf("%d", &spc - 1);
        }
        printf("Digite o novo valor do preço:\t");
        scanf("%f", &value);

        mudar_preco(ing, value, qtd, spc);
    }
    else if (strcmp(dec, "nao") || strcmp(dec, "n"))
    {
        /* code */
        printf("Ok");
    }

    for (int i = 0; i < qtd; i++)
    {
        /* code */
        printf("%.2f", ing[i]->preco);
    }
    

    

    free(ing);

    return 0;

}