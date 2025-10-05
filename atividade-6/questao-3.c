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
    struct ponto p1, p2;
    printf("Digite a coordenada x1: ");
    scanf("%d", &p1.x);
    printf("Digite a coordenada y1: ");
    scanf("%d", &p1.y);
    printf("Digite a coordenada x2: ");
    scanf("%d", &p2.x);
    printf("Digite a coordenada y2: ");
    scanf("%d", &p2.y);
    distancia = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
    printf("Distancia dos dois pontos: %.2f\n", distancia);
    return 0;
}