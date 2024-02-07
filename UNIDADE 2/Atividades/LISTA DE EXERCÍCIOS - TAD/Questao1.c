#include <stdio.h>
#include <stdlib.h>
#include "moduloQ1.h"


int main(void){
    int qtd, int dec, dec2;
    float value;

    printf("quantas contas voce vai criar: ");
    scanf("%d", &qtd);

    Conta ** contasbanc = (Conta**)malloc(qtd * sizeof(Conta*));
    for (int i = 0; i < qtd; i++)
    {
        contasbanc[i] = Cria_Conta();
    }
    
    printf("Qual a conta voce quer editar: ");
    scanf("%d", &dec);

    printf("valor do deposito: ");
    scanf("%f", &value);

    Depositar(contasbanc, dec - 1, value);
    ShowSaldo(contasbanc, dec - 1);

    printf("valor do retiramento: ");
    scanf("%f", &value);

    Sacar(contasbanc, dec - 1, value);
    ShowSaldo(contasbanc, dec - 1);

    if (qtd >= 2)
    {
        printf("conta que vai transferir: ");
        scanf("%d", &dec);
        printf("conta que vai receber: ");
        scanf("%d", &dec2);

        

    }
    
    
    
    return 0;

}