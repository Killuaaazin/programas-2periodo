#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mnumero(int a,int b) {
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
    printf("%d\n", mnumero(2,3));
    return 0;
}