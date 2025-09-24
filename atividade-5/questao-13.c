#include <stdio.h>
#include <string.h>

main(){
    char str[20];
    int i,j;
    printf("Digite uma string: ");
    gets(str);
    printf("digite um numero positivo para a primeira posição:");
    scanf("%d", &i);
    printf("digite outro numero para segunda posicao:");
    scanf("%d", &j);
    if(i<0 || j<0 || i>=strlen(str) || j>=strlen(str)){
        printf("Posições inválidas.\n");
    } else {
        for(int k=i; k<=j; k++){
            printf("%c", str[k]);
        }
        printf("\n");
        return 0;
}
}