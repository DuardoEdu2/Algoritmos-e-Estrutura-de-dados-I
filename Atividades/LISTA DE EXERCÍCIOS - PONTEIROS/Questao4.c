#include <stdio.h>
#include <math.h>

// Função para calcular a área e o perímetro de um hexágono
void calcula_hexagono(float l, float *area, float *perimetro) {
    *area = (3.0 * sqrt(3.0) * pow(l, 2)) / 2.0;
    *perimetro = 6.0 * l;
}

int main() {
    float lado, area, perimetro;

    // Solicita o lado do hexágono ao usuário
    printf("Informe o lado do hexagono: ");
    scanf("%f", &lado);

    // Calcula a área e o perímetro usando a função
    calcula_hexagono(lado, &area, &perimetro);

    // Exibe os resultados
    printf("Area do hexagono: %.2f\n", area);
    printf("Perimetro do hexagono: %.2f\n", perimetro);

    return 0;
}