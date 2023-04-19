//Nome: Ives Gabriel Figueiredo Santos Pinto

//Objetivo: Construir uma matriz[3][3], e multiplicar cada elemento por 5 e apresentar a matriz antes da multiplicação e após a multiplicação.
//Recurso: Matriz, sorteio de valor [rand()%(max-min+1)+min]

#include <stdio.h>
#include <stdlib.h>

void fimPrograma() {     printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n"); }

int main(void) {
    int mtr[3][3], i, j;
    char retorno;

    do
    {
system("cls");

        printf("\t\tPreencha a matriz[3][3], para posteriormente ser multiplicada por 5.\n\n");
        for(i=0; i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("Informe o valor na posição [%d][%d]: ", i+1, j+1);
                scanf("%d", &mtr[i][j]);
            }
        }
        printf("\nMatriz inserida:\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d  ", mtr[i][j]);
            }
            printf("\n");
        }
        printf("\nMatriz pós processada:\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                mtr[i][j] *= 5;
                printf("%d  ", mtr[i][j]);
            }
            printf("\n");
        }

    printf("\nDeseja realizar outra operação? [s - Sim | n - Não]\n");
    scanf(" %c", &retorno);
    }while(retorno != 'n' && retorno != 'N');

fimPrograma();
}