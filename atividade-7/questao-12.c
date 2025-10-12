#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int maior_fator_primo(int n) {
    int maior = -1;

    while (n % 2 == 0) {
        maior = 2;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maior = i;
            n /= i;
        }
    }
    if (n > 2) {
        maior = n;
    }

    return maior;
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    if (numero <= 0) {
        printf("Erro: O número deve ser positivo.\n");
    } else {
        int resultado = maior_fator_primo(numero);
        printf("O maior fator primo de %d é: %d\n", numero, resultado);
    }
    return 0;
}