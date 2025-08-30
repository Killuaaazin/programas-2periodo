#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float peso, excesso, multa;
    printf("Digite o peso dos peixes em quilos: ");
    scanf("%f", &peso);
    if(peso > 50){
        excesso = peso - 50;
        multa = excesso * 4.00;
    } else {
        excesso = 0;
        multa = 0;
    }
    printf("O excesso de peso e: %.2f quilos\n", excesso);
    printf("A multa a ser paga e: R$%.2f\n", multa);
    return 0;
}