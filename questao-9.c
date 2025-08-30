#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float numero1, numero2;
    printf("Digite dois numeros reais: ");
    scanf("%f %f", &numero1, &numero2);
    printf("Numeros na ordem inversa: %.2f %.2f\n", numero2, numero1);
    return 0;
}