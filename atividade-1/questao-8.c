#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int numero1, numero2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);
    printf("Numeros na ordem inversa: %d %d\n", numero2, numero1);
    return 0;
}