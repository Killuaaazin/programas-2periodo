#include <stdio.h>
#include <string.h>

main(){
    char palavra[100], palavra_cesar[100];
    int i;
    printf("Digite uma palavra: ");
    gets(palavra);
    for(i=0; i<strlen(palavra); i++){
        if(palavra[i] >= 'A' && palavra[i] <= 'w'){
            palavra_cesar[i] = palavra[i] + 3;
        }
        else{
            palavra_cesar[i] = palavra[i] - 23;
        }
    }
    printf("A frase em cesar é: %s\n",palavra_cesar);
    return 0;
}