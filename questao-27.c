#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float altura, raio, volume, pi = 3.141592;
    printf("Digite a altura e o raio do cilindro: ");
    scanf("%f %f", &altura, &raio);
    volume = pi * (raio * raio) * altura;
    printf("O volume do cilindro e: %.2f\n", volume);
    return 0;
}