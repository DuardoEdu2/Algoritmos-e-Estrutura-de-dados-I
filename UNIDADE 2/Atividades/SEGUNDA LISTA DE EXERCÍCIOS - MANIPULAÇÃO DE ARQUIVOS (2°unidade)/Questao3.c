#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct frutas
{
    /* data */
    char nome[50];
    float preco;
}Frutas;


int main(void){

    FILE *otp;
    Frutas fru;
    int value = 1;

    //modo de escrita
    otp = fopen("saida_q3.txt", "w");
    if (otp == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    else{
        printf("Arquivos Abertos\n");
    }

    while (value)
    {
        printf("Digite o nome: ");
        scanf(" %[^\n]", fru.nome);
    
        printf("Digite o preço: ");
        scanf("%f", &fru.preco);

        fprintf(otp, "Nome e preço da fruta: %s, %.2f$\n", fru.nome, fru.preco);

        printf("Deseja adicionar outra fruta? (s = 1/ n = 0)\n");
        scanf("%d", &value);
    }

    fclose(otp);
    printf("Arquivo finalizado");
    
    return 0;

}