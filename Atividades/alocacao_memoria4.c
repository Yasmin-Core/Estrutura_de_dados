#include <stdio.h>
#include <stdlib.h>

void main (){
    int linha, coluna, i, j;
    int **m1, **m2, **mr;
    printf("Digite o tamanho das matrizes M x N: ");
    scanf("%d %d", &linha, &coluna);

    m1 = (int**) malloc (linha * sizeof(int*));
        for(i=0; i<linha; i++){
            m1[i] = (int*) malloc(coluna * sizeof(int));
        }
    m2 = (int**) malloc (linha * sizeof(int*));
        for ( i = 0; i < linha; i++){
            m2[i] = (int*) malloc(coluna * sizeof(int));
        }
    mr =  (int**) malloc (linha * sizeof(int*));
        for(i=0; i<linha; i++){
            mr[i] = (int*) malloc(coluna * sizeof(int));
        }
    system("cls");
    printf("Preenchendo matriz 1:\n");

    for (i = 0; i < linha; i++){
        for (j = 0; i < coluna; i++){
            printf("Elemento %d x %d: ", i, j);
            scanf("%d", &m1[i][j]);    
        }     
    }
    system("cls");

    printf("Preenchendo matriz 2:\n");
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("Elemento %d x %d: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            mr[i][j] = m1[i][j] + m2[i][j];
        }
    }
    system("cls");
    printf("Matriz Resultado:\n\n");
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("%d", mr[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<linha; i++){
        free(m1[i]);
        free(m2[i]);
        free(mr[i]);
    }
    free(m1);
    free(m2);
    free(mr);
}








        




