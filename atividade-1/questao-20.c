#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int idade, ano_atual, ano_nascimento;
    printf("Digite sua idade e o ano atual: ");
    scanf("%d %d", &idade, &ano_atual);
    ano_nascimento = ano_atual - idade;
    printf("Voce nasceu em %d\n", ano_nascimento);
    return 0;
}