/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Questão 3, lista 7, referente a struct*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 2

typedef struct {
    char nome[20];
    float nota1, nota2, nota3, media;
} Alunos;

Alunos alunos[DIM];
int i;

void inserirDados() {

    for (i=0; i < DIM; i++)
    {
        printf("\nInforme o nome do %dº aluno: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Informe a 1ª nota do aluno %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].nota1);
        printf("Informe a 2ª nota do aluno %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].nota2);
        printf("Informe a 3ª nota do aluno %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].nota3);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
    }
}

void exibir() {

    for (i = 0; i < DIM; i++)
    {
        printf("\nNome: %s.\n", alunos[i].nome);
        printf("Média: %.2f\n", alunos[i].media);
    }
}

int main (void) {
    system("cls");
    printf("\t\tPrograma para realizar cálculo de média de três notas.\n");
    //printf("\nQuantos alunos irá inserir: ");
    //scanf("%d", &qntdAlunos);
    inserirDados();
    exibir();
    printf("\n");
    system("pause");
}