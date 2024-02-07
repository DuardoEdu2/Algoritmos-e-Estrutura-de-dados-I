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

    printf("Saldo da conta: %.2f $\n", conta[i]->saldo);

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

