#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){

    FILE *inpt, *otp;
    char linha[100];
    int maior = 0, menor = 1, num[20], cont = 0, temp = 0;
    float media = 0;

    //modo de leitura
    inpt = fopen("entrada_num.txt", "rt");
    //modo de escrita
    otp = fopen("saida_num.txt", "w");
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
        sscanf(linha,"%d", &num[cont]);
        cont++;
    }

    for (int i = 0; i < cont; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
        }
        if (num[i] < menor)
        {
            menor = num[i];
        }
        media = media + num[i];
    }
    
    fprintf(otp,"menor elemento: %d\nmaior elemento: %d\nmedia dos elementos: %f", menor, maior, media/cont);

    fclose(inpt);
    fclose(otp);

}