/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Questão 2, lista 07, referente a struct*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 2

typedef struct {
    float altura;
    float base;
    float resultado;
} Retangulo;

Retangulo area[DIM];
int i;

void inserirDados() {

    for(i=0; i < DIM; i++)
    {
        printf("\nInforme o valor da base: ");
        scanf("%f", &area[i].base);
        printf("Informe o valor da altura: ");
        scanf("%f", &area[i].altura);

        area[i].resultado = area[i].base * area[i].altura;
    } 
}

void exibir() {

    for(i = 0; i < DIM; i++)
    {
        printf("\nO valor da área do %dº cálculo é: %.2f\n", i+1, area[i].resultado);
    }
}

int main (void) {
    system("cls");

    printf("\t\tPrograma para cálculo de área de retângulos.\n");
    inserirDados();
    exibir();
    printf("\n");
    system("pause");
}