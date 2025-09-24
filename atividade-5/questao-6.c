#include <stdio.h>
#include <string.h>

int main() {
    char str[40], letra;
    int contador = 0, i;

    printf("Escreva uma frase:\n");
    gets(str);

    printf("Escreva uma letra para substituir as vogais:\n");
    scanf("%c",&letra);

    for (i = 0; i < 40; i++) {
        if (str[i] == 'a'|| str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            contador++;
            str[i] = letra;
        }
    }
    printf("A frase com as vogais trocadas: %s\n", str);
    printf("A quantidade de vogais na frase: %d\n", contador);

    return 0;
}
