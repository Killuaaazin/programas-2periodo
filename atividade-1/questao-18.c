#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int numero1,numero2,numero3,soma;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);
    soma = numero1 + numero2 + numero3;
    printf("A soma dos tres numeros e: %d\n", soma);
    return 0;
}