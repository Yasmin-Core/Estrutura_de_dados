#include <stdio.h>
#include <stdlib.h>


/*Ponteiro com IF e ELSE*/

int main () {

    int a = 0;
    int b = 0;

    int *pA = 0;
    int *pB = 0;

    printf("Digite um número inteiro:");
    scanf("%d",&a);

    printf("Digite um número inteiro:");
    scanf("%d",&b);

    pA = &a;
    pB = &b;

    printf("Conteúdo de A = %d \nConteúdo de B = %d \n",a, b);
    printf("Endereco de A = %p \nEndereco de B = %p \n",*pA, *pB);

    if(pA > pB) {

        if(&a > &b) 
            printf("\n\nEndereco %d de A é maior: \n",*pA);

    }
    else {
        printf("\n\nEndereco %d de B é maior: \n",*pB);
    }
}
