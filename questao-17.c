#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    //Faça um programa que leia um número real e imprima a quinta parte desse número.
    float numero, quinta_parte;
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    quinta_parte = numero / 5;      
    printf("A quinta parte de %.2f e %.2f\n", numero, quinta_parte);
    return 0;
}