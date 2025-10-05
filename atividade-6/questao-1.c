#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pessoa{
    char nome[50];
    int idade;
    char endereco[100];
};

int main(){
struct pessoa p1;
    printf("Digite o nome: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    p1.nome[strcspn(p1.nome, "\n")] = '\0';
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    getchar();
    printf("Digite o endereco: ");
    fgets(p1.endereco, sizeof(p1.endereco), stdin);
    p1.endereco[strcspn(p1.endereco, "\n")] = '\0';
    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Endereco: %s\n", p1.endereco);
    return 0;
};

