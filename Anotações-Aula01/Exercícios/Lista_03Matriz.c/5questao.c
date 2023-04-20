/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Uma matriz 5x5 com posições pre-estabelecidas com o valor 0. Em seguida informar linha e coluna e realizar a alteração de valor com número não negativo e inteiro */

#include <stdio.h>
#include <stdlib.h>

char retorno;
int mtr[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}}, colunas[5] = {0, 1, 2, 3, 4};
int i, j, linha, coluna, valor;

void mostrarmatriz()
{
    printf("\t0\t1\t2\t3\t4\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d", colunas[i]);
        for (j = 0; j < 5; j++)
        {
            printf("\t%d ", mtr[i][j]);
        }
        printf("\n");
    }
}

void inserirdados()
{

    do
    {
        do
        {
            printf("\nInforme o valor que deseja inserir. Lembre-se não pode ser negativo: \n");
            scanf("%d", &valor);
        } while (valor < 0);
        printf("Informe a posição linha: ");
        scanf("%d", &linha);
        printf("Informe a posição coluna: ");
        scanf("%d", &coluna);

        if (linha < 0 || linha > 5 || coluna < 0 || coluna > 5)
        {
            printf("\nInforme os valores de linha e coluna entre 0 e 4.\n");
        }
        else if (mtr[linha][coluna] == 0)
        {
            mtr[linha][coluna] = valor;
        }
        else
        {
            printf("\nEsta posição já foi alterada.\n");
        }

    } while (linha < 0 || linha > 5 || coluna < 0 || coluna > 5);
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
        printf("Matriz:\n\n");
        mostrarmatriz();
        inserirdados();
        mostrarmatriz();
        printf("\nDeseja adicionar outro valor? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
    fimPrograma();
}