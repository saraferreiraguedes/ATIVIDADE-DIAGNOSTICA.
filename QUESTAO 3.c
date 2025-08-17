#include <stdio.h>

int main() {
    float raio, area, perimetro;
    float pi = 3.14;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;     
    perimetro = 2 * pi * raio;   

    printf("Area do circulo: %.2f\n", area);
    printf("Perimetro do circulo: %.2f\n", perimetro);

    return 0;
}