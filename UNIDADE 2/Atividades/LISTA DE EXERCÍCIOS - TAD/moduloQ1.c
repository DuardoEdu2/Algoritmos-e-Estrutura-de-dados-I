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

    printf("Saldo da conta: %.2f $", conta[i]->saldo);

}

