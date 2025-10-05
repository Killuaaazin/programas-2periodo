#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct ponto
{
    int x;
    int y;
};
struct retangulo
{
    struct ponto p1;
    struct ponto p2;
};
int main()
{
    float area, diagonal, perimetro;
    struct retangulo r1;
    printf("Digite a coordenada x1 (superior esquerdo): ");
    scanf("%d", &r1.p1.x);
    printf("Digite a coordenada y1 (superior esquerdo): ");
    scanf("%d", &r1.p1.y);
    printf("Digite a coordenada x2 (inferior direito): ");
    scanf("%d", &r1.p2.x);
    printf("Digite a coordenada y2 (inferior direito): ");
    scanf("%d", &r1.p2.y);
    area = abs((r1.p2.x - r1.p1.x) * (r1.p2.y - r1.p1.y));
    diagonal = sqrt((r1.p2.x - r1.p1.x) * (r1.p2.x - r1.p1.x) + (r1.p2.y - r1.p1.y) * (r1.p2.y - r1.p1.y));
    perimetro = 2 * (abs(r1.p2.x - r1.p1.x) + abs(r1.p2.y - r1.p1.y));
    printf("Area do retangulo: %.2f\n", area);
    printf("Diagonal do retangulo: %.2f\n", diagonal);
    printf("Perimetro do retangulo: %.2f\n", perimetro);   
    return 0;
}