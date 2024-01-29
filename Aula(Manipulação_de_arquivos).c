#include <stdio.h>
#include <stdlib.h>

/*

FUNÇÃO PARA ABRIR UM ARQUIVO:
    FILE* fopen(nome_arquivo, char* modo); //ver os modos de aberturas

    FUNÇÃO PARA FUCHAR UM ARQUIVO:
        fclose(FILE* fp);

    FUNÇÃO PARA LER DADOS DE UM ARQUIVO:
        int fscanf(FILE* fp, char* formato, ...); //ler dados do arquivo;
        int fgetc(FILE* fp); // get c ou seja pega apenas um caractere por vez;
        char* fgets(char* s, int n, FILE* fp); get s ou seja pega uma string inteira;
    
    FUNÇÃO PARA ESCREVE DADOS:
        

*/

//exemplo:

int main(void){
    //Cria o arquivo: entrada.txt no modo texto "t"
    FILE* fp;
    fp = fopen("entrada.txt", "wt");

    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    else{
        printf("Arquivo Aberto\n");
    }
    if(fclose(fp) == 0){
        printf("Arquivo fechado");
    } //Fecha o arquivo criado
    return 0;
}




