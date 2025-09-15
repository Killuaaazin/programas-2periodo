#include <stdio.h>

int main() {
    double S = 0.0;
    int numerador = 1;
    int denominador = 1;

    while (numerador <= 99 && denominador <= 55) {
        S += (double)numerador / denominador;
        numerador += 2;
        denominador += 1;
    }

    printf("O valor de S é: %.6f\n", S);

    return 0;
}