/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Crie matriz 5x4 contendo na
1ª coluna - N° de matrícula (use inteiro).
2ª Coluna - Média das provas
3ª Coluna - Média dos trabalhos
4ª Coluna - Nota total.
*/

#include <stdio.h>
#include <stdlib.h>

char retorno;
int mediaT, i, j;
float mtr[5][4], mediarit = 0, somaNota = 0, maiorNota = 0, verif = 0, matricula = 0;

void atribuirdados()
{
    for (i = 0; i < 5; i++)
    {
        printf("Informe a matrícula do %dº aluno: ", i + 1);
        scanf("%f", &mtr[i][0]);
        printf("Informe a média das provas do %dº aluno: ", i + 1);
        scanf("%f", &mtr[i][1]);
        printf("Informe a média dos trabalhos do %dº aluno: ", i + 1);
        scanf("%f", &mtr[i][2]);
        mtr[i][3] = (mtr[i][1] + mtr[i][2]);
        somaNota += mtr[i][3];
    }
}
void mostrarmatriz()
{

    printf("\t|  Mt  |  MP  |  MT  |  NF |\n");
    printf("\t|______|______|______|_____|\n");
    for (i = 0; i < 5; i++)
    {
        printf("\t");
        for (j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                printf("|  %.0f   |", mtr[i][0]);
            }
            else
            {
                printf("  %.1f  ", mtr[i][j]);
            }
        }
        printf("\n\t|______|______|______|_____|\n");
    }
}
void mediaaritmetrica()
{
    for (i = 0; i < 5; i++)
    {
        verif = mtr[i][3];
        if (verif > maiorNota)
        {
            maiorNota = verif;
            matricula = mtr[i][0];
        }
    }
    printf("\nA maior nota final é do aluno de matrícula %.0f, com nota %.1f.\n", matricula, maiorNota);

    mediarit = somaNota / 5;
    printf("A média das notas finais é %.1f.\n", mediarit);
}
void fimPrograma()
{
    printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n");
}

int main(void)
{

    do
    {
        system("cls");
        mediarit = 0, somaNota = 0, maiorNota = 0, verif = 0, matricula = 0;

        printf("\t\tEscola FSP_Educação\n\nPrograma para inserir os dados dos alunos matriculados.\n\n");
        atribuirdados();
        printf("\n\n");
        mostrarmatriz();
        mediaaritmetrica();

        printf("\nDeseja realizar outra operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
    fimPrograma();
}