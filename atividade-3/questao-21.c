#include <stdio.h>

int main() {
    int n, num, maior, count = 0;

    printf("Quantos números deseja ler? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    printf("Digite os números:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (i == 0) {
            maior = num;
            count = 1;
        } else {
            if (num > maior) {
                maior = num;
                count = 1;
            } else if (num == maior) {
                count++;
            }
        }
    }

    printf("Maior número: %d\n", maior);
    printf("O maior número foi lido %d vezes.\n", count);

    return 0;
}