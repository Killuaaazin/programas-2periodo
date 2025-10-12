//Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse cilindro. O volume de um cilindro circular écalculado por meio da seguinte fórmula:V = π * raio² * altura, em que π = 3.1414592.
#include <stdio.h>
#include <math.h>

float volume(float altura, float raio) {
    return 3.1414592 * pow(raio, 2) * altura;

}
int main() {
    float altura, raio;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("O volume do cilindro é: %.2f\n", volume(altura, raio));
    return 0;
}