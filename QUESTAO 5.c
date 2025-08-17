#include <stdio.h>

int main() {
    int maquinas1 = 8, maquinas2 = 10;
    int pecas1 = 120;
    int pecas2;

    pecas2 = (maquinas2 * pecas1) / maquinas1;
    printf("Com %d maquinas vao ser produzidas %d pecas em 5 horas.", maquinas2, pecas2);

    return 0;
}