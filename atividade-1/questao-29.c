#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){ 
    char letra_maiuscula, letra_minuscula;
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra_maiuscula);
    letra_minuscula = letra_maiuscula + 32; 
    printf("A letra minuscula correspondente e: %c\n", letra_minuscula);
    return 0;
}