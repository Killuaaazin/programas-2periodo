#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float total = 780000.00;
    float ganhador1, ganhador2, ganhador3;
    ganhador1 = total * 0.46;
    ganhador2 = total * 0.32;
    ganhador3 = total - (ganhador1 + ganhador2);
    printf("O primeiro ganhador recebera: R$%.2f\n", ganhador1);
    printf("O segundo ganhador recebera: R$%.2f\n", ganhador2);
    printf("O terceiro ganhador recebera: R$%.2f\n", ganhador3);
    return 0;
}