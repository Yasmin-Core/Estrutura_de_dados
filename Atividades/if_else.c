#include <stdio.h>
#include <stdlib.h>

/* IF e else*/

int main () {
    int num = 0;
        printf("Digite um número:");
        scanf("%d", &num);
    if (num == 1){
        printf("Retorno: a \n");
    }
    else if (num == 2){
        printf("Retorno: b \n");
    }
    else if (num == 3){
        printf("Retorno: c \n");
    }
    else if (num == 4){
        printf("Retorno: d \n");
    }
    else {
        printf("Retorno: 0 \n");
    }
    return 0;
}        
