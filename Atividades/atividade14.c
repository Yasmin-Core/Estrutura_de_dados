#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro {
    int ID;
    char nome[30];
    float salario;
    int idade;
}CADCLI;


int main (){
    FILE *fp = fopen ("texto1.txt", "wb");
    if (fp == NULL)
    {
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    CADCLI c;

    fseek(fp, 2*sizeof(CADCLI), SEEK_SET);
    fread(&c, sizeof(CADCLI), 1, fp);
    printf("ID: %d \n Nome: %s\n salario: %f \n idade: %d ", c.ID, c.nome, c.salario, c.idade);
    rewind(fp);
    system("pause");
    return 0;
}
CADCLI cad[5]= {001, "José", 1800.00, 30,
                    002, "Helena", 2000.00, 26,
                    003, "Yasmin", 1600.00, 24,
                    004, "Marcello", 3000.00, 25,
                    005, "Michele", 1800.00, 35};



