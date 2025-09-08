#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){ 
    float a, b, h;
    printf("Digite os valores dos catetos a e b: ");
    scanf("%f %f", &a, &b);
    h = sqrt((a * a) + (b * b));
    printf("O valor da hipotenusa e: %.2f\n", h);
    return 0;
}