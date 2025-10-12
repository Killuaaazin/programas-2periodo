#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Erro: O número deve ser positivo.\n");
    } else {
        int resultado = fatorial(numero);
        printf("O fatorial de %d é: %d\n", numero, resultado);
    }
    return 0;
}