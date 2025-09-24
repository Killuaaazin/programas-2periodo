#include <stdio.h>
#include <string.h>


main(){
    char palavra[20], palavra_minuscula[20];
    int i;
    printf("Digite uma palavra: ");
    gets(palavra);
    for(i=0; i<strlen(palavra); i++){
        if(palavra[i] >= 'A' && palavra[i] <= 'Z'){
            palavra_minuscula[i] = palavra[i] + 32;
        }
        else{
            palavra_minuscula[i] = palavra[i];
        }
    }
    printf("A palavra em maiusculo é: %s\n",palavra_minuscula);
    return 0;
}