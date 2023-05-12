/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Questão 3, lista 7, referente a struct*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

typedef struct
{
    char nome[20];
    float nota1, nota2, nota3, media;
} Alunos;

int i = 0, qntdAlunos = 0;
Alunos alunos[MAX];

int inserirDados()
{

    printf("\nInforme o nome do %dº aluno: ", i++);
    scanf("%s", alunos[qntdAlunos].nome);
    printf("Informe a 1ª nota do aluno %s: ", alunos[qntdAlunos].nome);
    scanf("%f", &alunos[qntdAlunos].nota1);
    printf("Informe a 2ª nota do aluno %s: ", alunos[qntdAlunos].nome);
    scanf("%f", &alunos[qntdAlunos].nota2);
    printf("Informe a 3ª nota do aluno %s: ", alunos[qntdAlunos].nome);
    scanf("%f", &alunos[qntdAlunos].nota3);

    alunos[qntdAlunos].media = (alunos[qntdAlunos].nota1 + alunos[qntdAlunos].nota2 + alunos[qntdAlunos].nota3) / 3;
    qntdAlunos++;
}

void exibir()
{

    for (i = 0; i < qntdAlunos; i++)
    {
        printf("\nNome: %s.\n", alunos[i].nome);
        printf("Média: %.2f\n", alunos[i].media);
    }
}

int main(void)
{
    system("cls");
    int maximoAlunos;

    printf("\t\tPrograma para realizar cálculo de média de três notas.\n");
    printf("\nQuantos alunos irá inserir: ");
    scanf("%d", &maximoAlunos);

    while (qntdAlunos < maximoAlunos)
    {
        inserirDados();
    }
    exibir();
    printf("\n");

    system("pause");
}