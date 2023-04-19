/*Nome: Ives Gabriel Figueiredo Santos Pinto

Objetivo: Soma de duas matrizes 3x3
Recurso: Matriz, sorteio rand()%(max-min+1)+min*/

#include <stdio.h>
#include <stdlib.h>

void fimPrograma() {     printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n"); }

int main(void)
{
    system("cls");

    int tam =3;
    int mtr1[tam][tam], mtr2[tam][tam], mtrsoma[tam][tam], i, j;
    char retorno;

    do
    {
    system("cls");
    printf("\t\tPreencha os valores de duas matrizes para realizar a soma.\n");
    printf("\nInforme Matriz A:");
    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            printf("\nInforme o valor da posição [%d][%d]: ",i+1, j+1);
            /*scanf("%d", mtr1[i][j]);*/ mtr1[i][j] = rand()%15;
        }
    }
    printf("\n\nInforme Matriz B:");
    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            printf("\nInforme o valor da posição [%d][%d]: ",i+1, j+1);
            /*scanf("%d", mtr2[i][j]);*/ mtr2[i][j] = rand()%15;
            mtrsoma[i][j] = mtr1[i][j] + mtr2[i][j];
        }
    }
    printf("\n\nMatriz A:\n");
    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            printf("%2d ", mtr1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B:\n");
    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            printf("%2d ", mtr2[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz C (Resultado da soma):\n");
    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            printf("%2d ", mtrsoma[i][j]);
        }
        printf("\n");
    }

    printf("\nDeseja realizar outra operação? [s - Sim | n - Não]\n");
    scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno !='N');
    
fimPrograma();
}