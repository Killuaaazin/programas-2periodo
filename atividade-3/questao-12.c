#include <stdio.h>

int main() {
    int n, soma = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    printf("A soma dos divisores de %d (exceto ele próprio) é: %d\n", n, soma);
    return 0;
}