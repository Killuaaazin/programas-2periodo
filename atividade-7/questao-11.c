#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y) {
    int resultado = 1;
    for (int i = 0; i < y; i++) {
        resultado *= x;
    }
    return resultado;
}

int main() {
    int x, y;
    printf("Digite o valor de x (base): ");
    scanf("%d", &x);
    printf("Digite o valor de y (expoente): ");
    scanf("%d", &y);
    if (y < 0) {
        printf("Erro: Expoente negativo não é suportado.\n");
    } else {
        printf("%d elevado a %d é: %d\n", x, y, potencia(x, y));
    }
    return 0;
}