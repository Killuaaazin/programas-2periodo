
#include <stdio.h>
#include <stdlib.h>

int conversorParaSegundos(int horas, int minutos, int segundos) {
    return (horas * 3600) + (minutos * 60) + segundos;
}

int main() {
    int horas, minutos, segundos;
    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    printf("O horário em segundos é: %d\n", conversorParaSegundos(horas, minutos, segundos));
    return 0;
}