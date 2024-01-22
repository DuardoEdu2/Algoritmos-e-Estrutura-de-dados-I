#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char nome[70];
    char cargo[50];
    int id;
    float salario;

}funcionario;

void preencher(funcionario ** matriz, int qtd){

    for (int i = 0; i < qtd; i++)
    {
        /* Coleta do nome do funcionario */
        printf("Qual seu Nome?\n");
        scanf(" %[^\n]", matriz[i]->nome);

        /* Coleta do cargo do funcionario */
        printf("Qual seu cargo?\n");
        scanf(" %[^\n]", matriz[i]->cargo);

        /* Coleta do id do funcionario */
        printf("Qual seu id?\n");
        scanf("%d", &matriz[i]->id);

        /* Coleta do salario$$$ do funcionario */
        printf("Qual seu salario?\n");
        scanf("%f", &matriz[i]->salario);
    }
    

}

void mostrar(funcionario ** matriz, int qtd){

    for (int i = 0; i < qtd; i++)
    {
        /* amostra do nome do funcionario */
        printf("seu Nome %d: %s\n", i, matriz[i]->nome);
        
        /* amostra do cargo do funcionario */
        printf("seu cargo %d: %s\n", i, matriz[i]->cargo);
        
        /* amostra do id do funcionario */
        printf("seu id %d: %d\n", i, matriz[i]->id);
        
        /* amostra do salario$$$ do funcionario */
        printf("seu salario %d: %.2f\n", i, matriz[i]->salario);
        
    }

}

void alterar(funcionario ** matriz, int num){

    printf("Digite o novo salario desse funcionario: ");
    scanf("%f", &matriz[num - 1]->salario);

}

void comparar(funcionario ** matriz, int qtd){

    int maior = 0;
    int menor = 0;

    for (int i = 0; i < qtd - 1; i++)
    {
        /* code */
        if (matriz[i]->salario > matriz[i + 1]->salario)
        {
            maior = i;

            menor = i + 1;
        }
        if(matriz[i + 1]->salario > matriz[i]->salario)
        {
            maior = i + 1;

            menor = i;
        }
    }
    
    printf("maior salario: %.2f\n", matriz[maior]->salario);
    printf("Maior salario cargo: %s\n", matriz[maior]->cargo);
    printf("Menor salario :%.2f\n", matriz[menor]->salario);
    printf("Menor salario cargo: %s\n", matriz[menor]->cargo);

}

void liberarMatriz(funcionario ***matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free((*matriz)[i]);  // Libera cada linha
    }
    free(*matriz);  // Libera o array de ponteiros para as linhas
    *matriz = NULL;  // Define o ponteiro para a matriz como NULL para evitar acesso acidental
}

int main(){

    int qtdFunc;
    int NumFunc;
    char decisao;

    printf("Quanto funcionarios você deseja inserir: ");
    scanf("%d", &qtdFunc);

    //criando a matriz que armazenará todos os dados de todos os funcionarios
    funcionario ** func = (funcionario **) malloc (qtdFunc * sizeof(funcionario*));
    for (int i = 0; i < qtdFunc; i++)
    {
        /* code */
        func[i] = (funcionario *) malloc (4 *sizeof(funcionario));
    }

    if(func == NULL){
        printf("Exception has occured: Memory Allocation Error");
        exit(1);
    }
    else {
        printf("Memoria Alocada\n");
    }

    //preechendo os dados do funcionarios
    printf("Preencha os dados abaixo: \n");
    preencher(func, qtdFunc);   

    printf("Deseja visualizar os dados s/n?\n");
    scanf(" %c", &decisao);

    if (decisao == 's')
    {
        //mostrando os dados do funcionarios
        mostrar(func, qtdFunc);
        decisao = 'n';
    }
    else {
        printf("Ok\n");
        decisao = 'n';
    }

    printf("deseja alterar o salario de algum funcionario s/n?\n");
    scanf(" %c", &decisao);

    if (decisao == 's')
    {
        //preechendo o numero do funcionario especifico e depois alterar o numero do seu salario
        printf("Qual funcionario?\nFuncionario numero ");
        scanf(" %d", &NumFunc);
        alterar(func, NumFunc);
        NumFunc = 0;
    }
    else{
        printf("Ok\n");
    }

    comparar(func, qtdFunc);

    //liberar os espaços de memoria da matriz func
    liberarMatriz(&func, qtdFunc);

    return 0;

}