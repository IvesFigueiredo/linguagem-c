/*Nome: Ives Gabriel Figueiredo Santos Pinto

Objetivo: Numa matriz 4x5, Somar todos os elementos; Somatório dos elementos de cada linha e armazenando esse somatório em um vetor.
Recurso: Matriz, sorteio[rand()%(max-min+1)+min]*/

#include <stdio.h>
#include <stdlib.h>


void fimPrograma() {     printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n"); }

int main(void)
{
    char retorno;
    int i, j, mtr[4][5], somaL[4], somaT=0;
system("cls");

    do
    {
        printf("\t\tInforme uma matriz[4][5], para realizar as operações(Soma total e Soma de cada linha).\n");
        for(i=0; i<4; i++)
        {
            somaL[i]=0;
            for(j=0; j<5;j++)
            {
                printf("\nInforme o valor da posição [%d][%d]: ", i+1, j+1);
                /*scanf("%d", &mtr[i][j]);*/ mtr[i][j] = rand()%(15-0+1)+0;
                somaT+=mtr[i][j];
                somaL[i]+=mtr[i][j];
            }
        }
        printf("\n\nMatriz:\n");
        for(i=0;i<4;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("%2d ", mtr[i][j]);
            }
            printf("\n");
        }
        printf("\nSomatório por linha é:\n");
        for(i=0;i<4;i++)
        {
            printf("\nA soma da %dª linha é: %d", i+1, somaL[i]);
        }
        
        printf("\nO valor do somatório total é: %d", somaT);

    printf("\n\nDeseja realizar uma nova operação? [ s - Sim | n - Não ]\n");
    scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
    
fimPrograma();
}
