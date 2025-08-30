#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    //Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.  
    int numero, antecessor, sucessor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("O antecessor de %d e %d e o sucessor e %d\n", numero, antecessor, sucessor);
    return 0;
}