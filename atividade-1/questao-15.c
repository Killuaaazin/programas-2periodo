#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    //Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis. 
    char caractere;
    int inteiro;
    float real; 
    printf("Digite um caractere, um numero inteiro e um numero real: ");
    scanf(" %c %d %f", &caractere, &inteiro, &real);
    printf("Separados por espacos: %c %d %.2f\n", caractere, inteiro, real);
    printf("Separados por tabulacao: %c\t%d\t%.2f\n", caractere, inteiro, real);        
    printf("Cada um em uma linha:\n%c\n%d\n%.2f\n", caractere, inteiro, real);
    return 0;
}