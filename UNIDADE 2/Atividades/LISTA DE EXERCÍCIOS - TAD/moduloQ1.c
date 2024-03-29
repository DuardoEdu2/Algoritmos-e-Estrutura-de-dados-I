#include <stdio.h>
#include <stdlib.h>
#include "moduloQ1.h"

struct contabancaria {

    char titular[50];
    float numero;
    float saldo;

};

Conta * Cria_Conta(void){

    Conta * conta = (Conta*)malloc(sizeof(Conta));
    printf("Qual o Titular da sua conta: ");
    scanf(" %[^\n]", conta->titular);

    printf("Qual o Saldo da sua conta: ");
    scanf("%f", &conta->saldo);
    
    printf("Qual o Numero da sua conta: ");
    scanf("%f", &conta->numero);

    return conta;

}

void ShowSaldo(Conta ** conta, int i){

    printf("Saldo da conta %d: %.2f $\n", i + 1, conta[i]->saldo);

}

void Depositar(Conta ** conta, int i, float price){

    conta[i]->saldo = conta[i]->saldo + price;

}

void Sacar(Conta ** conta, int i, float price){

    if (conta[i]->saldo < price)
    {
        printf("Você não tem saldo suficiente\n");
    }
    else{
        conta[i]->saldo = conta[i]->saldo - price;
    }
    

}

void Trasnferir(Conta ** contas, int i, int j, int price){

    if (contas[i]->saldo < price)
    {
        printf("Você não tem saldo suficiente\n");
    }
    else{
        contas[i]->saldo = contas[i]->saldo - price;
        contas[j]->saldo = contas[j]->saldo + price;
    }

}

void removerConta(Conta ** conta, int qtd){

    for (int i = 0; i < qtd; i++)
    {
        /* code */
        free(conta[i]);
    }
    free(conta);    

}

