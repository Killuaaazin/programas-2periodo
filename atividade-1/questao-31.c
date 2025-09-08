#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int numero, multiplicacao, divisao;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    multiplicacao = numero << 1; 
    divisao = numero >> 1; 
    printf("A multiplicacao de %d por 2 e: %d\n", numero, multiplicacao);
    printf("A divisao de %d por 2 e: %d\n", numero, divisao);
    return 0;
}