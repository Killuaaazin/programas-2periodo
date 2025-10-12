#include <stdio.h>
#include <math.h>

float volume(float raio) {
    return (4.0/3.0) * 3.1414592 * pow(raio, 3);
}

int main() {
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    printf("O volume da esfera é: %.2f\n", volume(raio));
    return 0;
}