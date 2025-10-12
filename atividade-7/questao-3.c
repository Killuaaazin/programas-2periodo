#include <stdio.h>
#include <stdlib.h>
#include <string.h>



float conversorTemp(float farenheit){
    float celsius = (farenheit-32)*(5/9);
    return celsius;
}

int main(){
    float f;
    printf("Digite uma temperatura em farenheit: \n");
    scanf("%f", &f);
    float c = conversorTemp(f);
    printf("%f Graus Celsius\n\n", c);
    return 0;
}