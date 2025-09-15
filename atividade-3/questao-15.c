#include <stdio.h>

int main() {
    int num, maior, menor, primeiro = 1;

    while (1) {
        printf("Digite um número inteiro (negativo para sair): ");
        scanf("%d", &num);

        if (num < 0)
            break;

        if (primeiro) {
            maior = menor = num;
            primeiro = 0;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
    }

    if (primeiro) {
        printf("Nenhum número positivo foi lido.\n");
    } else {
        printf("Maior número lido: %d\n", maior);
        printf("Menor número lido: %d\n", menor);
    }

    return 0;
}