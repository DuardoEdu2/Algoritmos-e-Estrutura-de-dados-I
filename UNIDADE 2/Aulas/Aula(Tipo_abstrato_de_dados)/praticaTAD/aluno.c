#include <stdio.h>
#include <stdlib.h>
//TAD: aluno
#include "aluno.h"

struct aluno{
    char nome[50];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(){
    Aluno* estudante = (Aluno*) malloc(sizeof(Aluno));
    if (estudante == NULL)
    {
        printf("error on the memory allocation");
            exit(1);
    }

    printf("digite seu nome: ");
    scanf(" %[^\n]", estudante->nome);
    
    printf("digite sua matricula: ");
    scanf(" %d", &estudante->matricula);
    
    printf("digite seu IRA: ");
    scanf(" %f", &estudante->IRA);
    
    return estudante;

}

void imprimi_dados(Aluno * aluno, int i){
    printf("nome: %s\n", aluno[i].nome);
    printf("matricula: %d\n", aluno[i].matricula);
    printf("IRA: %.2f\n", aluno[i].IRA);
}

void liberar(Aluno * aluno){
    free(aluno);
}

int matricula_mais(Aluno * aluno){
    int dec = 0;
    int cont = 1;
    int timer = 1;

    while (timer == 1)
    {
        printf("Deseja matricular um aluno?");
        scanf("%d", &dec);

        if (dec == 1)
        {
            cont++;
            aluno = (Aluno*) realloc(aluno, cont * sizeof(Aluno));
            aluno = recebe_dados();
        
        }
    }
    
    
    
return cont;
}