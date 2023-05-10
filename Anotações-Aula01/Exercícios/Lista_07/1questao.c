/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: 1 questão da lista 07, referente a struct*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 2

    typedef struct {
        char nome[50];
        int idade;
        float altura;
    }Pessoas;

    Pessoas pessoas[DIM];
    int i;

void inserirDados() {

    for (i = 0; i < DIM; i++)
    {
        printf("\nDigite o %dº nome: ", i+1);
        scanf("%s", pessoas[i].nome);
        printf("Digite a idade de %s: ", pessoas[i].nome);
        scanf("%d", &pessoas[i].idade);
        printf("Digite a altura de %s em metros: ", pessoas[i].nome);
        scanf("%f", &pessoas[i].altura);
    }
}

void exibir() {

    printf("\nExibir os dados das pessoas inseridas:\n");

    for (i = 0; i < DIM; i++)
    {
        printf("\n%dª Pessoa:\n", i+1);
        printf("Nome: %s.\n", pessoas[i].nome);
        printf("Idade: %d.\n", pessoas[i].idade);
        printf("Altura: %.2f\n", pessoas[i].altura);
    }
}

int main (void) {
    
    system("cls");
    printf("\t\tPrograma de formulário de nome, idade e altura em STRUCT.\n");

    inserirDados();
    exibir();

    system("pause");

}