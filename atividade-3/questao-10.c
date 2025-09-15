#include <stdio.h>

int main() {
    int quantidade = 0, numero, soma = 0;
    while (quantidade < 10) {
        printf("Digite um inteiro positivo: ");
        if (scanf("%d", &numero) == 1 && numero > 0) {
            soma += numero;
            quantidade++;
        }
    }
    printf("Média: %.2f\n", soma / 10.0);
    return 0;
}