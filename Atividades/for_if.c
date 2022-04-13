#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    char string1[20], string2[20];
    printf("Digite dois nomes, e finalize cada um com enter: \n");
    gets(string1);
    gets(string2);
    char palavra = 'yasmin';
    char letra= 'a';
    int x = 0, cont1 = 0, cont2 = 0;
    
    for (x = 0; x < strlen (string1); x++)
        if (string1[x] == letra) {
            cont1 ++;
        }
        
    for (x = 0; x < strlen(string2); x++)
        if(string2 [x] == letra); {
            cont2 ++;
        }
        
    for (x = 0; x < strlen (string1); x++)
    
        if (string1[x] == palavra) {
            printf(" O nome foi encontrado na string1 ('yasmin')!");
        }
        else {
            printf("O nome não foi encontrado !");
        }
        
    for (x = 0; x < strlen(string2); x++)
    
        if(string2 [x] == letra); {
            printf(" O nome foi encontrado na string2 ('yasmin')");
        }
        else {
            printf("O nome não foi encontrado !");
        }
        
printf("A letra \"%c\"aparece %d vez(es) na string1," letra, cont1 );
printf("e %d vez(es) na string 2", cont2);

}