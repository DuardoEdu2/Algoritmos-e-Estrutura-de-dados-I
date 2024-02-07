#include <stdio.h>
#include <stdlib.h>
//TAD: aluno
#include "aluno.h"

int main(void){
    Aluno* aluno;
    int cont = matricula_mais(aluno);

    for (int i = 0; i < cont; i++)
    {
        /* code */
        imprimi_dados(aluno, i);

    }
    
    liberar(aluno);

    return 0;

}