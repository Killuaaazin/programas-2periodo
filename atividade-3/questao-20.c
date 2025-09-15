#include <stdio.h>

unsigned long long fatorial(int n) {
    unsigned long long fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int N;
    double E = 0.0;

    // Leitura do valor de N
    printf("Digite um valor inteiro e positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N deve ser inteiro e positivo.\n");
        return 1;
    }

    // Cálculo da soma
    for (int i = 1; i <= N; i++) {
        E += 1.0 / fatorial(i);
    }

    // Exibição do resultado
    printf("O valor de E é: %.6f\n", E);

    return 0;
}