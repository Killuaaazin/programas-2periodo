#include <stdio.h>

int main() {
    int n;
    printf("Informe um número inteiro maior ou igual a zero: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada inválida.\n");
        return 1;
    }

    unsigned long long anterior = 0, atual = 1, fibonacci = 0;
    if (n == 0) {
        fibonacci = 0;
    } else if (n == 1) {
        fibonacci = 1;
    } else {
        for (int i = 2; i <= n; i++) {
            fibonacci = anterior + atual;
            anterior = atual;
            atual = fibonacci;
        }
        fibonacci = atual;
    }

    printf("O termo de ordem %d da sequência de Fibonacci é: %llu\n", n, fibonacci);
    return 0;
}