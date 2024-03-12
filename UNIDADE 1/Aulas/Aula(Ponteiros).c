#include <stdio.h>

void add(float *result, float operand1, float operand2) {
    *result = operand1 + operand2;
}

void subtract(float *result, float operand1, float operand2) {
    *result = operand1 - operand2;
}

void multiply(float *result, float operand1, float operand2) {
    *result = operand1 * operand2;
}

void divide(float *result, float operand1, float operand2) {
    if (operand2 != 0) {
        *result = operand1 / operand2;
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
    }
}

int main() {
    float num1, num2, result;
    char operation;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    void (*operationPtr)(float *, float, float);

    switch (operation) {
        case '+':
            operationPtr = add;
            break;
        case '-':
            operationPtr = subtract;
            break;
        case '*':
            operationPtr = multiply;
            break;
        case '/':
            operationPtr = divide;
            break;
        default:
            printf("Erro: Operação inválida.\n");
            return 1;
    }

    operationPtr(&result, num1, num2);

    printf("Resultado: %.2f\n", result);

    return 0;
}