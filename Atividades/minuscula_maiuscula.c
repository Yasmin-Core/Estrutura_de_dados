#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

/* manipular arquivos -> minuscula para maiuscula*/

int main () {
    setlocale (LC_ALL, "" "");
    FILE *f1, *f2;
/*f1 -> arquivo com o texto minuscula | r- lê arquivo */
    f1 = fopen("arq1.txt", "r");
/*f2 -> arquivo sem nada que vai ser implantado o texto em maiúscula | w- cria ou apaga arquivo*/
    f2 = fopen("arq2.txt", "w");
    if (f1 == NULL || f2 == NULL){
        printf("Erro na abertura!\n");
        system ("pause");
        exit(1);
    }
/* toupper -> mudar de minuscula para maiúscula*/
    char c = fgetc(f1);
    while (c !=EOF) {
        fputc (toupper(c), f2);
        c = fgetc(f1);
    }
    fclose (f1);
    fclose (f2);

    f2= fopen("arq2.txt", "r");
    char b = fgetc(f2);
    while (b !=EOF);{
        printf("%c", b);
        b= fgetc(f2);
    }
    printf("\n\n\n");
    fclose(f2);
    system("pause");
    return 0;    
}