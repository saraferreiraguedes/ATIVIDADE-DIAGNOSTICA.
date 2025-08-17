#include <stdio.h>

int main() {
    float preco, percentual, valorFinal;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentual);

    valorFinal = preco - (preco * percentual / 100);

    printf("O valor final do produto com desconto e: R$ %.2f\n", valorFinal);

    return 0;
}