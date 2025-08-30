#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){ 
    float kmh, ms;
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);
    ms = kmh / 3.6;
    printf("A velocidade em m/s e: %.2f\n", ms);
    return 0;
}