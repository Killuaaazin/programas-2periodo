#include <stdio.h>
#include <string.h>

main(){
    char produto[20];
    float desconto, preco, preco_a_vista;
    printf("Digite o nome do produto: ");   
    gets(produto);
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    desconto = preco * 0.1;
    preco_a_vista = preco - (preco * 0.1);
    printf("O preço do produto %s com 10%% de desconto é: R$%.2f e o desconto foi de %.2f \n", produto, preco_a_vista,desconto);
    return 0;

}