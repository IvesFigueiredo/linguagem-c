// Nome: Ives Gabriel Figueiredo Santos Pinto
// Questão 03 lista 02

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i;
    float nota[3], soma = 0, media = 0;
    char nome[50], retorno;

    do
    {
        system("cls");
        media = 0;
        soma = 0;

        printf("Informe o nome do aluno: ");
        scanf("%s", nome);

        printf("\n");
        for (i = 0; i < 3; i++)
        {
            printf("Informe a %dª nota: ", i + 1);
            scanf("%f", &nota[i]);
            if (nota[i] < 0 || nota[i] > 10)
            {
                printf("\nO valor da nota deve ser [0 e 10], por favor insera corretamente.\n");
                i--;
            }
            else
            {
                soma += nota[i];
            }
        }
        media = soma / 3;

        if (media >= 7.0)
        {
            printf("\nAluno: %s.\n", nome);
            for (i = 0; i < 3; i++)
            {
                printf("%dª Nota: %.2f\n", i + 1, nota[i]);
            }
            printf("Média: %.2f\n\t _______________________________\n\t|\tAprovado por média.\t|\n\t|_______________________________|\n\n", media);
        }
        else if (media < 7.0 && media > 5.0)
        {
            printf("Aluno: %s.\n", nome);
            for (i = 0; i < 3; i++)
            {
                printf("%dª Nota: %.2f\n", i + 1, nota[i]);
            }
            printf("Média: %.2f\n\t _______________________________\n\t|\tEm Recuperação.\t\t|\n\t|_______________________________|\n\n", media);
        }
        else
        {
            printf("Aluno: %s.\n", nome);
            for (i = 0; i < 3; i++)
            {
                printf("%dª Nota: %.2f\n", i + 1, nota[i]);
            }
            printf("Média: %.2f\n\t _______________________________\n\t|\tReprovado por média.\t|\n\t|_______________________________|\n\n", media);
        }
        printf("Deseja realizar uma nova operação? [s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');

    fimPrograma();
}

void fimPrograma()
{
    printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n");
}