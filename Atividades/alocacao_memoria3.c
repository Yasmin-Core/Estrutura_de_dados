#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, a, nota, media = 0, *p= NULL;
    printf("Quantos alunos: ");
    scanf("%d", &a);
    // reservar memória
    p = (int *) malloc (a*sizeof (int));
    for (i = 0; i < a; i++){
        printf("Qual é a nota do aluno %d ? : ", i+1);
        scanf("%d",&p[i] );
        media = media + p[i];
    }
    media = media/ a;

    //Vai mostrar as notas que foram digitadas
    
    for (i=0; i<a; i++){
        printf("As notas sao: %.2d\n", p[i]);
    }
    printf("A média dos alunos são %d !", media);
    system("pause");
    free(p);
}