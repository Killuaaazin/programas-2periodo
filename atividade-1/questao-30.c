#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int numero, centenas, dezenas, unidades, invertido;
    printf("Digite um numero inteiro positivo de tres digitos: ");
    scanf("%d", &numero);
    centenas = numero / 100;
    dezenas = (numero / 10) % 10;
    unidades = numero % 10;
    invertido = (unidades * 100) + (dezenas * 10) + centenas;
    printf("O numero invertido e: %d\n", invertido);
    return 0;
}