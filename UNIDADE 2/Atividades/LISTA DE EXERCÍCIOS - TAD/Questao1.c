#include <stdio.h>
#include <stdlib.h>
#include "moduloQ1.h"


int main(void){
    int qtd;
    int dec;

    printf("quantas contas voce vai criar: ");
    scanf("%d", &qtd);

    Conta ** contasbanc = (Conta**)malloc(qtd * sizeof(Conta*));
    for (int i = 0; i < qtd; i++)
    {
        contasbanc[i] = Cria_Conta();
    }
    
    printf("Qual a conta voce quer ver o saldo: ");
    scanf("%d", &dec);

    ShowSaldo(contasbanc, dec - 1);
    
    return 0;

}