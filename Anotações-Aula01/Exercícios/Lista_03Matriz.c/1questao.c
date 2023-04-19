    //Nome: Ives Gabriel Figueiredo Santos Pinto

    // 1- Objetivo: Criar um programa de matrix 6x6 e mostrar quantos valores foram maiores que 10.
    // 2- Recurso: Matriz, função sorteio [rand()%(max-min+1)+min]
    

#include <stdio.h>
#include <stdlib.h>


void fimPrograma(){     printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n"); }

int main(void) {
system("cls");
    char retorno;
    int  mtr[5][5], i, j, cont = 0;

    do
    {
cont=0;
        printf("\t\tInforme os valores para preencher uma matriz[6][6]\n\n");
        for(i=0; i<6; i++)
        {
            for(j=0; j<6; j++)
            {
                printf("Informe o valor da posição [%d]x[%d]:\n", i+1, j+1);
                /*scanf("%d", &mtr[i][j]);*/ mtr[i][j] = rand() % (15 - 0+1) +0;
                if(mtr[i][j] > 10)
                {
                    cont++;
                }
            }
        }
        printf("\nMatriz:\n");
        for(i=0; i<6; i++)
        {
            for(j=0; j<6; j++)
            {
                printf("%d  ", mtr[i][j]);
            }
            printf("\n");
        }
        printf("\nQuantidade de valores superiores a 10 são, %d.\n", cont);

     printf("\nDeseja realizar outra operação? [ s - Sim | n - Não ]\n");
     scanf(" %c", &retorno);
    }while(retorno != 'n' && retorno != 'N');

fimPrograma();
}
