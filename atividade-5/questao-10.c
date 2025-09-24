#include <stdio.h>
#include <string.h>


main(){
    char palavra[20], palavra_maiuscula[20];
    int i;
    printf("Digite uma palavra: ");
    gets(palavra);
    for(i=0; i<strlen(palavra); i++){
        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            palavra_maiuscula[i] = palavra[i] - 32;
        }
        else{
            palavra_maiuscula[i] = palavra[i];
        }
    }
    printf("A palavra em maiusculo é: %s\n",palavra_maiuscula);
    return 0;
}
    