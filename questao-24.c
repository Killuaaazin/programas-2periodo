#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){  
    float graus, radianos, pi = 3.141592;
    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);
    radianos = graus * (pi / 180);
    printf("O angulo em radianos e: %.6f\n", radianos);
    return 0;
}