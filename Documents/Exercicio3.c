#include <stdio.h>
#define PI 3.1415

float raio, area, peri;

void f_leitura() {
    printf("Digite o raio: ");
    scanf("%f", &raio);
}

void f_area() {
    area = PI * raio * raio;
}

void f_peri() {
    peri = 2 * PI * raio;
}

void f_imprimi() {
    f_leitura();
    f_area();
    f_peri();

    printf("A area do circulo e: %.2f\n", area);
    printf("O perimetro do circulo e: %.2f\n", peri);
}

int main() {
    f_imprimi();
    return 0;
}

