#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct{

char nome[50];
float salario;
int id;
char cargo[70];

}Funcionario;


void implemetacaoFuncionario(Funcionario *ptrfuncionario){

    printf("Qual o seu nome?\n");
    fgets(ptrfuncionario->nome, sizeof(ptrfuncionario->nome), stdin);
    ptrfuncionario->nome[strcspn(ptrfuncionario->nome, "\n")] = '\0';
    
    printf("Qual o seu cargo?\n");
    fgets(ptrfuncionario->cargo, sizeof(ptrfuncionario->cargo), stdin);
    ptrfuncionario->cargo[strcspn(ptrfuncionario->cargo, "\n")] = '\0';

    printf("Qual o seu salário?\n");
    scanf("%f", &ptrfuncionario->salario);

    printf("Qual o seu id?\n");
    scanf("%d", &ptrfuncionario->id);

    
}

void exibirFuncionario(Funcionario *ptrfuncionario) {
    printf("\nDados do funcionário:\n");
    printf("Nome: %s\n", ptrfuncionario->nome);
    printf("Salário: %.2f\n", ptrfuncionario->salario);
    printf("Identificador: %d\n", ptrfuncionario->id);
    printf("Cargo: %s\n", ptrfuncionario->cargo);
}

void modificarSalario(Funcionario *ptrfuncionario){
    printf("Digite o novo salario\n");
    scanf("%f", &ptrfuncionario->salario);
}


int main(){

    char escolha;
    int cont = 0;
    Funcionario funcionario1;
    Funcionario *ptrfuncionario1 = &funcionario1;
    

    implemetacaoFuncionario(ptrfuncionario1);
    exibirFuncionario(ptrfuncionario1);

    

    while (cont == 0)
    {
        printf("Você deseja altera o seu salario?(s/n)\n");
        scanf(" %c", &escolha);
        if (escolha == 's')
        {
        /* code */
            modificarSalario(ptrfuncionario1);
            cont++;
        }
        else if (escolha == 'n')
        {
        /* code */
            printf("Ok");
            cont++;
        }
        else{
            printf("digite apenas 's' ou 'n'\n");
        }
    }

    exibirFuncionario(ptrfuncionario1);
    
    return 0;
}