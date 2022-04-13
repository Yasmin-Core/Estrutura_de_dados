#include <stdio.h>
#include <stdlib.h>

/* Variáveis globais e Variáveis locais*/


void calculoVantagens(float nhoras, float salHoras, int nFilhos, float valFilho);
void calculoDeducoes(float taxIR);

/*variaveis globais*/

float salBruto, salFamilia, vantagens, INSS, IRPF, deducoes;

/*Deduz o que vc quer*/

int main (void) {
    // Agoras essas variáveis locais
    float numHoras, salHora, valFilho, taxIR;
    int numFilhos;

    printf("\tPrograma calculo de Vantagens e Deducoes.\n\n");
    printf("Digite o numero de horas trabalhadas: ");
    scanf(" %f", &numHoras);
    printf("\nDigite o valor do salario hora: ");
    scanf(" %f", &salHora);
    printf("\nInforme quantos filhos o funcionario tem: ");
    scanf(" %d", &numFilhos);
    printf("\nDigite o valor do salario familia por filho: ");
    scanf(" %f", &valFilho);
    printf("\nInforme a taxa de desconto do IR:");
    scanf(" %f", &taxIR);
    taxIR = taxIR / 100;

    calculoVantagens (numHoras, salHora, valFilho, numFilhos);
    calculoDeducoes (taxIR);

    printf("\t\tRelatorio do calculo de Vantagens e Deducoes.\n\n");
    printf("O salario bruto do funcionario e: %.2f\n", salBruto);
    printf("O salario familia do funcionario e: %.2f\n", salFamilia);
    printf("As Vantagens do funcionario sao: %.2f\n", vantagens);

    printf("\n\nE descontado R$ %.2f, referente ao INSS.\n", INSS);
    printf("Desconto de R$ %.2f, refente ao imposto de renda.\n", IRPF);
    printf("O total de deducoes do funcionario e: %.2f\n", deducoes);

}

// Pega todas informações anteriores e faz os calculos

void calculoVantagens (float nHoras, float salHora, int nFilhos, float valFilho){
    salBruto = nHoras * salHora;
    salFamilia = nFilhos * valFilho;
    vantagens = salBruto * salFamilia;    
}
void calculoDeducoes (float taxIR){
    INSS = salBruto * 0.08;
    IRPF = salBruto * taxIR;
    deducoes = INSS + IRPF;
}