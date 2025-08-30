#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float tamanho_arquivo, velocidade_link, tempo_download;
    printf("Digite o tamanho do arquivo para download em MB: ");
    scanf("%f", &tamanho_arquivo);
    printf("Digite a velocidade do link de internet em Mbps: ");
    scanf("%f", &velocidade_link);
    tempo_download = (tamanho_arquivo * 8) / (velocidade_link * 60); 
    printf("O tempo aproximado de download do arquivo e: %.2f minutos\n", tempo_download);
    return 0; 
}