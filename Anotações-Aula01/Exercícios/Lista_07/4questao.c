/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Questã 4, Lista 03, referente a struct*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int salario, anoContrato;
} Funcionario;

    Funcionario func;

void inserirDados() {

    printf("\nInforme o nome do funcionário: ");
    scanf("%s", func.nome);
    printf("\nInforme o salário de %s: ", func.nome);
    scanf("%d", &func.salario);
    printf("\nInforme o ano de admissão de %s: ", func.nome);
    scanf("%d", &func.anoContrato);
}

void exibir() {
    func.anoContrato = 2023 - func.anoContrato;
    printf("\n\nO funcionário %s, possui %d anos na companhia, com salário de R$ %d.\n", func.nome, func.anoContrato, func.salario);
}

int main (void) {
    system("cls");
        printf("\t\tPrograma formulário de funcionário.\n");
        inserirDados();
        exibir();
    system("pause");
}