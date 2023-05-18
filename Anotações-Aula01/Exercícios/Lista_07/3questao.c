/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Questão 3, lista 7, referente a struct*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[20];
    float nota1, nota2, nota3, media;
} Alunos;

int i, qntdAlunos;

Alunos *alunos; // Declarando o array alunos como ponteiro

void inserirDados()
{

    for (i = 0; i < qntdAlunos; i++)
    {
        printf("\nInforme o nome do %dº aluno: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Informe a 1ª nota do aluno %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].nota1);
        printf("Informe a 2ª nota do aluno %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].nota2);
        printf("Informe a 3ª nota do aluno %s: ", alunos[i].nome);
        scanf("%f", &alunos[i].nota3);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    }
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
    printf("\t\tPrograma para realizar cálculo de média de três notas.\n");
    printf("\nQuantos alunos irá inserir: ");
    scanf("%d", &qntdAlunos);
    
    alunos = (Alunos *) malloc(qntdAlunos * sizeof(Alunos)); // o ponteiro(alunos) recebe = (tipo_da_variavel * -> (Alunos *)) malloc()

    inserirDados();
    exibir();
    printf("\n");
    printf("\nQuantidade, bytes, da variável é %d\n", sizeof(Alunos));
    system("pause");

    free(alunos);
}

/*
    Função dinamica de memória 

        Quando o tamnho não é conhecido no momento em que escreve o código, mas é fornecido pelo usuário em quanto é executado. Salientando que após a utilização do da função dinâmica, a memória deve ser liberada usando a função "free(inserir_nome_do_ponteiro)"

        Logo, a sintáxe é [ (ponteiro *) malloc(nome_da_variavel * sizeof(nome_elemento_struct)) ]

        Como foi feito no programa acima. 
*/