#include <stdio.h>
#include <stdlib.h>

float imc(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura;
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);
    printf("O IMC é: %.2f\n", imc(peso, altura));
    return 0;
}