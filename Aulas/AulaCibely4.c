#include <stdio.h>
#include <stdlib.h>

float Media(int tamanho, int *vetor) {
    int soma = 0;
    for (int cont = 0; cont < tamanho; cont++) {
        soma = vetor[cont] + soma;
    }
    return ((float)soma / tamanho);
}

int main(void) {
    int tam_vetor;
    printf("Qual o tamanho do vetor? \n");
    scanf("%d", &tam_vetor);

    int *vetor = (int *)malloc(tam_vetor * sizeof(int));

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tam_vetor; i++) {
        scanf("%d", &vetor[i]);
    }

    float resul = Media(tam_vetor, vetor);
    printf("\nResultado da media: %f\n", resul);

    free(vetor);

    return 0;
}