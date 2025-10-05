#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct ponto
{
    int x;
    int y;
};
int main()
{
    float distancia;
    struct ponto p1;
    printf("Digite a coordenada x: ");
    scanf("%d", &p1.x);
    printf("Digite a coordenada y: ");
    scanf("%d", &p1.y);
    printf("Ponto (%d, %d)\n", p1.x, p1.y);
    distancia = sqrt(p1.x * p1.x + p1.y * p1.y);
    printf("Distancia da origem: %.2f\n", distancia);
    return 0;
}