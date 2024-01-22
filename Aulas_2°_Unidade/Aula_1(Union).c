#include <stdio.h>
#include <stdlib.h>

//UMA UNION É COMO STRUCT SÓ QUE COM MAIS CONTROLE DE MEMORIA.
//NA UNION ELA PODE TER UMA LISTA DE VARIAVEIS
//MAS ELA IRÁ ARMAZENAR APENAS UM DOS VALORES DAS VARIAVEIS NA MEMORIA.

//estrutura para armazenar um documento por vez
typedef union pessoadoc
{
    /* data */
    char rg[20];
    char cpf[20];
}Documentos;



//estrutura union
typedef union tipodados
{
    int inteiro;
    float flutuante;
}Dados;



int main (){

    Dados uniao;
    printf("Digites seus dados: \t");
    scanf("%d %f", &uniao.inteiro, &uniao.flutuante);

    printf("Inteiro: %d \nFlutuante: %f", uniao.inteiro, uniao.flutuante);

    return 0;

}