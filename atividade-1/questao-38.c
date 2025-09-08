#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void){
    float area, area_folga, litros_necessarios;
    int latas, galoes, latas_misto, galoes_misto;
    float preco_latas, preco_galoes, preco_misto;
    printf("Informe o tamanho da área a ser pintada (em m²): ");
    scanf("%f", &area);
    area_folga = area * 1.1;
    litros_necessarios = area_folga / 6.0;
    latas = ceil(litros_necessarios / 18.0);
    preco_latas = latas * 80.0;
    galoes = ceil(litros_necessarios / 3.6);
    preco_galoes = galoes * 25.0;
    latas_misto = (int)(litros_necessarios / 18.0);
    float resto = litros_necessarios - (latas_misto * 18.0);
    galoes_misto = ceil(resto / 3.6);
    if (resto <= 0) galoes_misto = 0;
    preco_misto = (latas_misto * 80.0) + (galoes_misto * 25.0);
    printf("\nSituação 1: Apenas latas de 18L\n");
    printf("Quantidade de latas: %d\n", latas);
    printf("Preço total: R$ %.2f\n", preco_latas);
    printf("\nSituação 2: Apenas galões de 3,6L\n");
    printf("Quantidade de galões: %d\n", galoes);
    printf("Preço total: R$ %.2f\n", preco_galoes);
    printf("\nSituação 3: Mistura de latas e galões\n");
    printf("Latas de 18L: %d\n", latas_misto);
    printf("Galões de 3,6L: %d\n", galoes_misto);
    printf("Preço total: R$ %.2f\n", preco_misto);
    return 0;
}