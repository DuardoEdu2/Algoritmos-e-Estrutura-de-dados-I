#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    FILE *inpt, *otp;
    char nome[100];
    char linha[100];
    float notas[3], media = 0;

    //modo de leitura
    inpt = fopen("entrada.txt", "rt");
    //modo de escrita
    otp = fopen("saida_q2.txt", "w");
    if (inpt == NULL || otp == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    else{
        printf("Arquivos Abertos\n");
    }

    while (fgets(linha, 100, inpt) != NULL)
    {
        sscanf(linha,"%20[^\t]%f\t%f\t%f", nome, &notas[0], &notas[1], &notas[2]);
        fprintf(otp, "%s\t%.1f\t%.1f\t%.1f\n", nome, notas[0], notas[1], notas[2]);
        
    }
    
    fclose(inpt);
    fclose(otp);

}
