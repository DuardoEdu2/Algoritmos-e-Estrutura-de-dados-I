#include <stdio.h>
#include "Modulo.c"

int main(void){

    int num1, num2;
    int result;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    result = soma(num1, num2);
    printf("%d\n", result);

    result = subtracao(num1, num2);
    printf("%d\n", result);

    result = multiplicacao(num1, num2);
    printf("%d\n", result);

    result = divisao(num1, num2);
    printf("%d\n", result);

    printf("foi");

    return 0;

}