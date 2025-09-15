#include <stdio.h>

int main() {
    int n;
    double hn = 0.0;

    printf("Digite o valor de n para calcular Hn: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n deve ser maior ou igual a 1.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        hn += 1.0 / i;
    }

    printf("O número harmônico H%d é: %.6f\n", n, hn);

    return 0;
}