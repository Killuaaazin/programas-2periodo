#include <stdio.h>

int main() {
    int N, num = 1;
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}