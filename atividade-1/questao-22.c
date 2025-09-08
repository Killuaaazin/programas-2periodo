#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float reais, cotacao, dolares;
    printf("Digite o valor em reais e a cotacao do dolar: ");
    scanf("%f %f", &reais, &cotacao);
    dolares = reais / cotacao;
    printf("O valor em dolares e: %.2f\n", dolares);
    return 0;
}