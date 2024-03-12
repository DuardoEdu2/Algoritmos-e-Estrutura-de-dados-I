#include <stdio.h>
#include <stdlib.h>

int main() {

    int QtdPart;
    printf("Quantos participantes terão?\n");
    scanf("%d", &QtdPart);

    char *pesquisa1 = (char *)malloc(QtdPart * sizeof(char));
    char **pesquisa2 = (char **)malloc(QtdPart * sizeof(char *));

    int contM = 0; // Contador de participantes masculinos
    int contF = 0; // Contador de participantes femininos

    for (int i = 0; i < QtdPart; i++) {
        printf("Qual o seu gênero M/F: ");
        scanf(" %c", &pesquisa1[i]);

        // Aloca espaço para a string e lê a resposta
        pesquisa2[i] = (char *)malloc(30 * sizeof(char));
        printf("Você gostou?\n");
        scanf(" %[^\n]", pesquisa2[i]);

        // Conta participantes masculinos e femininos
        if (pesquisa1[i] == 'M' || pesquisa1[i] == 'm') {
            contM++;
        } else if (pesquisa1[i] == 'F' || pesquisa1[i] == 'f') {
            contF++;
        }
    }

    // Calcula porcentagens
    float porcentagemM = (contM * 100.0) / QtdPart;
    float porcentagemF = (contF * 100.0) / QtdPart;

    printf("\nPorcentagem de participantes masculinos: %.2f%%\n", porcentagemM);
    printf("Porcentagem de participantes femininos: %.2f%%\n", porcentagemF);

    for (int i = 0; i < QtdPart; i++) {
        printf(" %c", pesquisa1[i]);
        printf(" %s\n", pesquisa2[i]);
    }

    // Libera a memória alocada para as strings
    for (int i = 0; i < QtdPart; i++) {
        free(pesquisa2[i]);
    }

    // Libera os arrays de strings e caracteres
    free(pesquisa1);
    free(pesquisa2);

    return 0;
}