#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "" "");
    FILE *f;
    f = fopen ("arq1.txt", "r");
    
    if ((f == NULL)){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }
    char c;
    int i;

    for (i=0; i< 400; i ++){
        c = fgetc(f);
        printf ("%c", c);
    }
    printf ("\n \n \n");
    fclose(f);
    system("pause");
    return 0;
}