#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int c;
    int nlinhas = 0;
    FILE* fp;
    /*Abre aquivo para leitura*/
    fp = fopen("entrada.txt", "rt");
    if(fp == NULL){
        printf("Não foi possivel abrir o arquivo");
        return 1;
    }
    /*Lê caractere a caractere*/
    while ((c = fgetc(fp))!= EOF)
    {
        if (c == '\n')
        {
            nlinhas++;
        }
        
    }
    /* fecha arquivo*/
    fclose(fp);
    /*Exibe resultado na tela*/
    printf("Numero de linha = %d\n", nlinhas);
    return 0;    
}