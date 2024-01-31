#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    //Cria o arquivo: entrada_escrita.txt no modo texto "w"
    FILE* fp = fopen("entrada_escrita.txt", "w");
    char c[500];
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    else{
        printf("Arquivo Aberto\n");
    }
    
    //fputc('A', fp);
    //printf("escreva nome: ");
    //scanf("%[^\n]", c);
    //fputs(c, fp);
    fprintf(fp, "Meu texto! ");

    if(fclose(fp) == 0){
        printf("Arquivo fechado");
    } //Fecha o arquivo criado
    return 0;
}




