#include <stdio.h>
#include <stdlib.h>

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    if (numero <= 0) {
        printf("Erro: O número deve ser positivo.\n");
    } else {
        int resultado = somatorio(numero);
        printf("O somatório de 1 até %d é: %d\n", numero, resultado);
    }
    return 0;
}