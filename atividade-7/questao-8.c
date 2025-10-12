
#include <stdio.h>
#include <math.h>

int quadradoPerfeito(int num) {
    if (num < 0) {
        return 0;
    }
    int raiz = (int)sqrt(num);
    return (raiz * raiz == num);
}

int main() {
    int num;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);
    if (quadradoPerfeito(num)) {
        printf("%d é um quadrado perfeito.\n", num);
    } else {
        printf("%d não é um quadrado perfeito.\n", num);
    }
    return 0;
}