#include <stdio.h>

int main() {
    int numero, menor, maior;

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numero);
        if (i == 0) {
            menor = maior = numero;
        } else {
            if (numero < menor) menor = numero;
            if (numero > maior) maior = numero;
        }
    }

    printf("Menor valor lido: %d\n", menor);
    printf("Maior valor lido: %d\n", maior);

    return 0;
}