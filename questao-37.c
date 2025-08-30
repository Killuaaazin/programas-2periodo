#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){ 
    float area, litros_necessarios, latas_necessarias, custo_total;
    printf("Digite o tamanho em metros quadrados da area a ser pintada: ");
    scanf("%f", &area);
    litros_necessarios = area / 3.0;
    latas_necessarias = ceil(litros_necessarios / 18.0); 
    custo_total = latas_necessarias * 80.0;
    printf("Quantidade de latas de tinta a serem compradas: %.0f\n", latas_necessarias);
    printf("Preco total: R$%.2f\n", custo_total);
    return 0;
}