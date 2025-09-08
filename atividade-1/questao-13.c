#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char caractere;
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    printf("Caractere entre aspas duplas: \"%c\"\n", caractere);
    return 0;
}