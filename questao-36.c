#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float valor_hora, horas_trabalhadas, salario_bruto, inss, sindicato, ir, total_descontos, salario_liquido;
    printf("Digite quanto voce ganha por hora e o numero de horas trabalhadas no mes: ");
    scanf("%f %f", &valor_hora, &horas_trabalhadas);
    salario_bruto = valor_hora * horas_trabalhadas;
    inss = salario_bruto * 0.08;
    sindicato = salario_bruto * 0.05;
    ir = salario_bruto * 0.11;
    total_descontos = inss + sindicato + ir;
    salario_liquido = salario_bruto - total_descontos;
    printf("Salario bruto: R$%.2f\n", salario_bruto);
    printf("Quanto pagou ao INSS: R$%.2f\n", inss);
    printf("Quanto pagou ao sindicato: R$%.2f\n", sindicato);
    printf("Quanto pagou ao Imposto de Renda: R$%.2f\n", ir);
    printf("Total de descontos: R$%.2f\n", total_descontos);
    printf("Salario liquido: R$%.2f\n", salario_liquido);
    return 0;
}