#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float tamanho_gb, tamanho_mb, tamanho_kb;
    printf("Digite o tamanho do arquivo em Gigabytes: ");
    scanf("%f", &tamanho_gb);
    tamanho_mb = tamanho_gb * 1024; 
    tamanho_kb = tamanho_gb * 1024 * 1024; 
    printf("O tamanho do arquivo em Megabytes e: %.2f MB\n", tamanho_mb);
    printf("O tamanho do arquivo em Kilobytes e: %.2f KB\n", tamanho_kb);
    return 0;
}