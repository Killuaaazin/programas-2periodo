#include <stdio.h>

int main() {
    int i, numero, soma = 0;
    float media;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número inteiro: ", i);
        scanf("%d", &numero);
        soma += numero;
    }

    media = soma / 10.0;
    printf("A média dos números é: %.2f\n", media);

    return 0;
}