#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);

    if (strcmp(str1, str2) < 0) {
        printf("Ordem alfabética:\n%s\n%s\n", str1, str2);
    } else {
        printf("Ordem alfabética:\n%s\n%s\n", str2, str1);
    }

    return 0;
}