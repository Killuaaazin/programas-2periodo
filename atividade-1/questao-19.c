#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float valor1,valor2,valor3,valor4,media;
    printf("Digite quatro numeros reais: ");
    scanf("%f %f %f %f", &valor1, &valor2, &valor3, &valor4);
    media = (valor1 + valor2 + valor3 + valor4) / 4;
    printf("A media dos quatro numeros e: %.2f\n", media);
    return 0;
}