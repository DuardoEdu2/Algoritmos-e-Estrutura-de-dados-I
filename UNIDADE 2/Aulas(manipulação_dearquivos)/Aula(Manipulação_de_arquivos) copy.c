#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    //Cria o arquivo: entrada.txt no modo texto "t"
    FILE* fp = fopen("entrada.txt", "rt");
    char c[20];
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    else{
        printf("Arquivo Aberto\n");
    }
    //c = fgetc(fp);
    //fgets(c, 20, fp);
    fscanf(fp, "%[^\n]", c);
    printf("%s\n", c);
    if(fclose(fp) == 0){
        printf("Arquivo fechado");
    } //Fecha o arquivo criado
    return 0;
}




