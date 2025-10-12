#include <stdio.h>
#include <stdlib.h>

float calcular_serie(int n) {
    float S = 0.0;
    for (int i = 1; i <= n; i++) {
        S += ((i*i) + 1.0) / (i + 3);
    }
    return S;
}   

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    if (numero <= 0) {
        printf("Erro: O número deve ser positivo.\n");
    } else {
        double resultado = calcular_serie(numero);
        printf("O resultado da série S para N=%d é: %.2f\n", numero, resultado);
    }
    return 0;
}