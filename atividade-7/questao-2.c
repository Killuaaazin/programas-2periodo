#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char temp[101];

void meses(int m){
    char mes[12][20] = {"Janeiro 31", "Fevereiro 28", "Março 30", "Abril 31", "Maio 30", "Junho 31", "Julho 30", "Agosto 31", "Setembro 30", "Outubro 31", "Novembro 30", "Dezembro 31"};
    if (m < 1 || m > 12) {
        return -1;
    }
    strcpy(temp, mes[m-1]);

}

int main(){
    int m;
    printf("Digite um número de 1 a 12: ");
    scanf("%d", &m);
    meses(m);
    printf("%s\n", temp);
    return 0;
} 