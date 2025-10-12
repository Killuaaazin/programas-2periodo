#include <stdio.h>
#include <stdlib.h>

float calcular(float num1, float num2, char operador) {
    switch (operador) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Erro: Divisão por zero.\n");
                return 0;
            }
        default:
            printf("Erro: Operador inválido.\n");
            return 0;
    }
}

int main() {
    float num1, num2, resultado;
    char operador;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    
    resultado = calcular(num1, num2, operador);
    printf("O resultado é: %.2f\n", resultado);
    
    return 0;
}