#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    FILE *inpt, *otp;
    char nome[50] = fgets(nome, 50, inpt);
    float nota1, nota2, nota3;

    //modo de leitura
    inpt = fopen("entrada.txt", "rt");
    //modo de escrita
    otp = fopen("saida.txt", "w");
    if (inpt == NULL || otp == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    else{
        printf("Arquivos Abertos\n");
    }

}