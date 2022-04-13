#include <stdio.h>
#include <stdlib.h>

/* FOR e VETOR*/

int main (){
    int v1[2], v2[2];
    int i = 0, j = 0, igual = 0;

    for (i = 0; i < 2; i++)
    {
        printf("\n Informe o valor do elemento %d do vetor 1: ", i+1);
        scanf("%d" , &v1 [i]);
    }
    for ( j = 0; j < 2; j++)
    {
        printf("\n Informe o valor do elemento %d do vetor 2: ", j+1);
        scanf("%d" , &v2 [j]);     
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            if (v1[i] == v2[j]){
               printf("\n Valores iguais na posição: %d e %d\n", i+1,j+1);
            }
        }
        
    }
printf("\n Os vetores 1: %d e %d", v1[0], v1[1]);
printf("\n Os vetores 2: %d e %d", v2[0], v2[1]);
    
}
