#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media;

typedef struct Aluno
{
    char nome[20];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

void main()
{
    Aluno a;
    system("cls");

    printf("Informe o nome do Aluno: \n");
    scanf("%s", a.nome);

    printf("\nInforme a 1°, 2° e 3° nota do aluno: %s \n", a.nome);
    scanf("%f %f %f", &a.nota1, &a.nota2, &a.nota3);

    outra();
}

void outra()
{
    Aluno a;

    media = (a.nota1 + a.nota2 + a.nota3) / 3;

    printf("O aluno: %s teve uma média de: %.2f", a.nome, media);
}