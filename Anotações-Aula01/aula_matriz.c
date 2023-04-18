#include <stdio.h>
#include <stdlib.h>

int main(void) {
system("cls");
    char retorno;
    int matriz[3][3];
    int i, j;

    do
    {

        printf("Informe os valores da matriz 3x3:\n");
            for (i=0; i<3; i++)
            {
                for(j=0; j<3; j++)
                {
                    scanf("%d", &matriz[i][j]);
                }
            }

            printf("\nLogo a matriz é:\n");
                for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        printf("%d ", matriz[i][j]);
                    }
                    printf("\n");
                }

        printf("Deseja realizar outra operação? [ s- Sim | n= Não]\n");
        scanf(" %c", &retorno);
    }while(retorno != 'n' && retorno != 'N');
}