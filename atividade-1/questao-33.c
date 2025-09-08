#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int numero, deslocamento_esquerda, deslocamento_direita;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero, &deslocamento_esquerda);
    deslocamento_direita = numero >> deslocamento_esquerda; 
    deslocamento_esquerda = numero << deslocamento_esquerda; 
    printf("O deslocamento de %d a esquerda por %d e: %d\n", numero, deslocamento_esquerda, deslocamento_esquerda);
    printf("O deslocamento de %d a direita por %d e: %d\n", numero, deslocamento_esquerda, deslocamento_direita);
    return 0;
}