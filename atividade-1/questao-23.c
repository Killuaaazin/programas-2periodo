#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float celsius, fahrenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    printf("A temperatura em graus Fahrenheit e: %.2f\n", fahrenheit);
    return 0;
}