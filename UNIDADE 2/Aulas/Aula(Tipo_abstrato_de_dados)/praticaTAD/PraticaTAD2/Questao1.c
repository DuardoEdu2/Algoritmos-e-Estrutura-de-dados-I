#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moduloQ1.c"

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
                        liberarMatriz(ing, qtd); // Liberar a memória alocada antes de sair com erro
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
                printf("Qual dos ingressos voce quer alterar: ");
                scanf("%d", &spc);
                spc = spc - 1;
        }
        printf("Digite o novo valor do preço:\t");
        scanf("%f", &value);

        mudar_preco(ing, value, spc);
    }
    else if (strcmp(dec, "nao") || strcmp(dec, "n"))
    {
        /* code */
        printf("Ok");
    }

    for (int i = 0; i < qtd; i++)
    {
        /* code */
        printf("Preco %d: %.2f\n", i + 1, ing[i]->preco);
    }

    printf("compraração: \n");
    comparar_value(ing, qtd);
    
    liberarMatriz(ing, qtd);

    return 0;

}