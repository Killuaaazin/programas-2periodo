#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int dia, mes, ano; 
    printf("Digite uma data: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Data no formato dd/mm/aaaa: %02d/%02d/%04d\n", dia, mes, ano);
    return 0;

}