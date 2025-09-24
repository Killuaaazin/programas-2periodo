#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20];
    int j,i;
    printf("Digite uma palavra: ");
    gets(palavra);
    for(i=0, j=strlen(palavra)-1; i<j; i++, j--){
        if (palavra[i] != palavra[j]){
        printf("%s", "não é um palindromo\n" );
        break;
    }
        else{
        printf("%s", "é um palindromo\n" );
        break;
    }
}
    return 0;
}
