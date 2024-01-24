#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno
{
    /* data */
    int matricula;
    char nome[80];
    char turma;
    float notas[3];
    float media;
}Aluno;


void liberarMatriz(Aluno** alunos, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        free(alunos[i]);
        printf("Liberou a memoria, ");
    }
    free(alunos);
}

void matricular(Aluno ** alunos, int mx){

    for (int i = 0; i < mx; i++)
    {
        /* code */
        printf("Nome do aluno:\t");
        scanf(" %[^\n]", alunos[i]->nome);

        printf("Turma do aluno:\t");
        scanf(" %c", &alunos[i]->turma);

        printf("Matricula do aluno:\t");
        scanf("%d", &alunos[i]->matricula);

        if(i >= mx){
            printf("Acabou as vagas...VAZA");
            break;
        }

    }
    
}

void lanca_notas(Aluno ** alunos, int mx){

    float result = 0;

    for (int i = 0; i < mx; i++)
    {
        /* code */
        printf("Aluno %d\n", i);
            for (int  j= 0; j < 3; j++)
            {
            /* code */
                printf("informe a nota da prova %d:\t", j);
                scanf("%f", alunos[i][j].notas);
            }
        
    }

    for (int i = 0; i < mx; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            result = result + *alunos[i][j].notas;
        }

        alunos[i]->media = (result / 3);
        result = 0;
        
    }

}

void imprimir(Aluno ** alunos, int mx){

    for (int i = 0; i < mx; i++)
    {
        /* code */
        printf("===================================================\n");
        printf("Aluno %d\n", i);
        printf("Matricula: %d\n", alunos[i]->matricula);
        printf("Nome: %s\n", alunos[i]->nome);
        printf("Turma: %c\n", alunos[i]->turma);
            for (int j = 0; j < 3; j++)
                {
                /* code */
                    printf("Nota %d: %.2f, ", j, *alunos[i][j].notas);
                }
        printf("Media: %.2f\n", alunos[i]->media);
            
    }
}

void Imprimir_Turma_Aprovada(Aluno ** alunos, int mx, char turm){
        /* code */
        for (int i = 0; i < mx; i++)
        {
            /* code */
            if (alunos[i]->turma == turm)
            {
                /* code */
                if (alunos[i]->media >= 7.0)
                {
                    /* code */
                    printf("Aluno %d que esta na turma %c esta aprovado\n", i, alunos[i]->turma);
                }
                else if (alunos[i]->media < 7.0)
                {
                    /* code */
                    printf("Aluno %d que esta na turma %c esta reprovado\n", i, alunos[i]->turma);
                }
                
            }
            else{
                printf("Essa turma não existe");
            } 
        }
}

int main(void){

    int max = 5;
    int tamanho = 0;
    char turm;

    //printf("Qual é o maximo de vagas?\n");
    //scanf("%d", &max);

    printf("Quantos alunos deseja matricular?\n");
    scanf("%d", &tamanho);

    if (tamanho < max)
    {
        max = tamanho;
    }
    

    Aluno **alunos = (Aluno**) malloc(tamanho * sizeof(Aluno*));

        if (alunos == NULL) {
            fprintf(stderr, "Erro ao alocar a matriz de Alunos\n");
            return 1; // Sair com erro
        }
            for (int i = 0; i < tamanho; i++)
            {
            /* code */
                alunos[i] = (Aluno*)malloc(sizeof(Aluno));
                    if (alunos[i] == NULL) {
                        fprintf(stderr, "Erro ao alocar a estrutura Aluno[%d]\n", i);
                        liberarMatriz(alunos, tamanho); // Liberar a memória alocada antes de sair com erro
                        return 1; // Sair com erro
                    }
            }

    matricular(alunos, max);
    lanca_notas(alunos, max);
    imprimir(alunos, max);   

    printf("Qual turma voce quer avaliar:\t");
    scanf(" %c", &turm);
    Imprimir_Turma_Aprovada(alunos, max, turm);

    liberarMatriz(alunos, tamanho);

    return 0;

}