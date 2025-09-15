#include <stdio.h>

int main() {
    int n;
    printf("Digite um número positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Entrada inválida.\n");
        return 1;
    }

    printf("Os divisores do número %d são:", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}