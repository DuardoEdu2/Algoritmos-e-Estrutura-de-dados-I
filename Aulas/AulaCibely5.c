#include <stdio.h>
#include <stdlib.h>

int main() {
    int QtdQuest;
    int QtdAluno;
    int AprovCount = 0;

    printf("Quantos alunos há?\n");
    scanf("%d", &QtdAluno);

    if (QtdAluno <= 0) {
        printf("Número inválido de alunos.\n");
        return 1; // Exit with an error code
    }

    printf("Quantas Questões há nessa prova?\n");
    scanf("%d", &QtdQuest);

    if (QtdQuest <= 0) {
        printf("Número inválido de questões.\n");
        return 1; // Exit with an error code
    }

    int QuestValue = 10 / QtdQuest;

    char *gabarito = (char *)malloc(QtdQuest * sizeof(char));

    for (int i = 0; i < QtdQuest; i++) {
        printf("Qual é o gabarito da questão %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    for (int i = 0; i < QtdQuest; i++) {
        printf("Questao %d: %c\n", i + 1, gabarito[i]);
    }

    char **aluno = (char **)malloc(QtdAluno * sizeof(char*));

    for (int i = 0; i < QtdAluno; i++) {
        aluno[i] = (char *)malloc(QtdQuest * sizeof(char));
    }

    float *notas = (float *)calloc(QtdAluno, sizeof(float));

    for (int i = 0; i < QtdAluno; i++) {
        for (int j = 0; j < QtdQuest; j++) {
            printf("aluno %d, Qual foi sua resposta na questao %d: ", i + 1, j + 1);
            scanf(" %c", &aluno[i][j]);

            if (aluno[i][j] == gabarito[j]) {
                notas[i] += QuestValue;
            }
        }
    }

    for (int i = 0; i < QtdAluno; i++) {
        for (int j = 0; j < QtdQuest; j++) {
            printf("Gabarito aluno %d: %c\n", i + 1, aluno[i][j]);
        }
        printf("Nota do Aluno %d: %.2f\n", i + 1, notas[i]);

        if (notas[i] >= 6) {
            AprovCount++;
        }
    }

    printf("A TAXA DE APROVAÇÃO É DE: %.2f%%", (AprovCount * 100.0) / QtdAluno);

    // Freeing memory for aluno array
    for (int i = 0; i < QtdAluno; i++) {
        free(aluno[i]);
    }

    free(aluno);
    free(gabarito);
    free(notas);

    return 0;
}
