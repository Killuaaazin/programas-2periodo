#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float raio, area, pi = 3.141592;
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    printf("A area do circulo e: %.2f\n", area);
    return 0;
}