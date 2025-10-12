#include <stdio.h>
#include <stdlib.h>

void gerar_triangulo(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    if (numero <= 0) {
        printf("Erro: O número deve ser positivo.\n");
    } else {
        gerar_triangulo(numero);
    }
    return 0;
}