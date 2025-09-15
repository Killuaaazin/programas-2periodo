#include <stdio.h>

int main() {
    int num, i, primo = 1;

    printf("Digite um número inteiro maior que 1: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Número inválido. Deve ser maior que 1.\n");
        return 1;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("%d é primo.\n", num);
    else
        printf("%d não é primo.\n", num);

    return 0;
}