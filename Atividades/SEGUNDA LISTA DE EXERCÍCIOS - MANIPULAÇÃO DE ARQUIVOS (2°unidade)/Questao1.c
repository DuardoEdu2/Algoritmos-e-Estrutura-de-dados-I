#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario
{
    /* data */
    int id;
    char nome[50];
    float salario;
}Funcionario;


int main(void){

    FILE *otp;
    Funcionario func;

    //modo de escrita
    otp = fopen("saida_q1.txt", "w");
    if (otp == NULL)
    {
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    else{
        printf("Arquivos Abertos\n");
    }

    printf("Digite seu nome: ");
    scanf("%[^\n]", func.nome);

    printf("Digite seu id: ");
    scanf("%d", &func.id);
    
    printf("Digite seu salario: ");
    scanf("%f", &func.salario);

    fprintf(otp, "Nome do funcionario: %s\nId do funcionario: %d\nSalario do funcionario: %.2f", func.nome, func.id, func.salario);

}