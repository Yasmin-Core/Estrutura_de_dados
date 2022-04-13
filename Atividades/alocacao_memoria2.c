#include <stdio.h>
#include <stdlib.h>

void main(){

// *p = NULL ->  ponteiro vazio
    int i, n, *p=NULL;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
// Reserva a memória de acordo com os numeros que usuários pôr

    p = (int *) malloc (n*sizeof (int));

//Começará com 1

    p[0]= 1;

// exibir os números impares
    for(i=1; i<n; i++){
    p[i]= p[i-1] + 2;
}
   for (i=0; i<n; i++){
        printf("Elemento %d : %d\n", i, p[i]);
}
system("pause");
free(p);
}
