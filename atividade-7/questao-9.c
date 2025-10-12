
#include <stdio.h>
#include <stdlib.h>


float media(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A' || tipo == 'a') {
        return (n1 + n2 + n3) / 3.0;
    } else if (tipo == 'P' || tipo == 'p') {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10.0;
    } else {
        printf("Tipo de média inválido.\n");
        return -1;
    }
}

int main() {
    float n1, n2, n3;
    char tipo;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite o tipo de média (A para aritmética, P para ponderada): ");
    scanf(" %c", &tipo);
    float resultado = media(n1, n2, n3, tipo);
    if (resultado != -1) {
        printf("A média calculada é: %.2f\n", resultado);
    }
    return 0;
}