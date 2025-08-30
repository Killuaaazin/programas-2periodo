#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int numero1, numero2, ou_exclusivo, ou_bit_a_bit, e_bit_a_bit;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);
    ou_exclusivo = numero1 ^ numero2; 
    ou_bit_a_bit = numero1 | numero2; 
    e_bit_a_bit = numero1 & numero2; 
    printf("O resultado de %d ou exclusivo %d e: %d\n", numero1, numero2, ou_exclusivo);
    printf("O resultado de %d ou bit a bit %d e: %d\n", numero1, numero2, ou_bit_a_bit);
    printf("O resultado de %d e bit a bit %d e: %d\n", numero1, numero2, e_bit_a_bit);
    return 0;
}