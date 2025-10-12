#include <stdio.h>
#include <stdlib.h>

double calcular_e(int n) {
    double e = 0.0;
    double fatorial = 1.0;

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            fatorial *= i; 
        }
        e += 1.0 / fatorial; 
    }

    return e;
}

int main() {
    int numero;
    printf("Digite o número de termos para calcular e: ");
    scanf("%d", &numero);
    if (numero <= 0) {
        printf("Erro: O número deve ser positivo.\n");
    } else {
        double resultado = calcular_e(numero);
        printf("O valor aproximado de e usando %d termos é: %.8f\n", numero, resultado);
    }
    return 0;
}