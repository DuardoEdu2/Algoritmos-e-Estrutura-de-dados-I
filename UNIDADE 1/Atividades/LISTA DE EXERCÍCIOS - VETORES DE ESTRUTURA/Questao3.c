#include <stdio.h>
#include <stdlib.h>

typedef struct retangulo {
    float altura;
    float base;
} Retangulo;

typedef struct circulo {
    float raio;
} Circulo;

Retangulo* ret_circunscrito(Circulo* c, float h) {
    Retangulo* ret = (Retangulo*)malloc(sizeof(Retangulo));
    ret->base = 2 * c->raio;
    ret->altura = h;
    return ret;
}

Circulo* circ_interno(Retangulo* r) {
    Circulo* circ = (Circulo*)malloc(sizeof(Circulo));
    circ->raio = (r->base < r->altura) ? r->base / 2 : r->altura / 2;
    return circ;
}

int main() {
    float raio_circulo, altura_retangulo;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio_circulo);
    printf("Digite a altura do retangulo circunscrito: ");
    scanf("%f", &altura_retangulo);

    Circulo c = {raio_circulo};
    Retangulo* ret_circ = ret_circunscrito(&c, altura_retangulo);
    Circulo* circ_int = circ_interno(ret_circ);
    
    printf("Retangulo circunscrito ao circulo: Base = %.2f, Altura = %.2f\n", ret_circ->base, ret_circ->altura);
    printf("Circulo interno ao retangulo: Raio = %.2f\n", circ_int->raio);
    free(ret_circ);
    free(circ_int);
    return 0;
}