#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char caractere, caractere2, caractere3;
    printf("Digite tres caracteres: ");
    scanf(" %c %c %c", &caractere, &caractere2, &caractere3);
    printf("%c\n%c\n%c\n", caractere, caractere2, caractere3);
    return 0;
}