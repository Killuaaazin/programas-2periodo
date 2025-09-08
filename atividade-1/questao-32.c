#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int numero, complemento;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    complemento = ~numero;
    printf("O complemento bit a bit de %d e: %d\n", numero, complemento);
    return 0;
}