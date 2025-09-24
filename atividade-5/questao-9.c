#include <stdio.h>
#include <string.h>

int main() {
char str1[40], str2[20];
int i, contador=0;
printf("Digite uma string: ");
gets(str1);
printf("Digite outra string: ");
gets(str2);
for (i = 0; i < strlen(str1); i++) {
    if (str1[i] == str2[0]) {
        contador++;
    }
}
if (contador == 0) {
    printf("A string 2 não está contida na string 1.\n");
}   
printf("A string 2 está contida na string 1:%d vezes.\n",contador);
    return 0;
}
