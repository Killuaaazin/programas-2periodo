#include <stdio.h>
#include <stdlib.h>

void gerar_exclamacoes(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("!");
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
        gerar_exclamacoes(numero);
    }
    return 0;
}