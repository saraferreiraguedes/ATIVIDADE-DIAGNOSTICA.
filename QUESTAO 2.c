#include <stdio.h>

int main() {
    float salarioBase, valorHoraExtra, salarioTotal;
    int horasExtras;

    printf("Digite o salario base: ");
    scanf("%f", &salarioBase);

    printf("Digite o valor da hora extra: ");
    scanf("%f", &valorHoraExtra);

    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%d", &horasExtras);

    salarioTotal = salarioBase + (valorHoraExtra * horasExtras);

    printf("O valor total a ser recebido e: %.2f\n", salarioTotal);

    return 0;
}