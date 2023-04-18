#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("cls");
    char retorno;
    int matriz[3][3];
    int i, j, somatotal = 0, somalinha = 0, somacoluna = 0;

    do
    {
        somatotal = 0;

        printf("Informe os valores da matriz 3x3:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("\nLogo a matriz é:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < 3; i++)
        {
            somalinha = 0;
            for (j = 0; j < 3; j++)
            {
                somalinha = somalinha + matriz[i][j]; // Soma os números de cada linha, mas tá somando apenas a última linha
                somatotal = somatotal + matriz[i][j]; // Soma todos os números
            }
            printf("Soma da %dª linha = %d", i + 1, somalinha);
            printf("\n");
        }
        for (j = 0; j < 3; j++)
        {
            somacoluna = 0;
            for (i = 0; i < 3; i++)
            {
                somacoluna = somacoluna + matriz[i][j]; // Soma os números de cada coluna
            }
            printf("Soma da %dª coluna = %d", j + 1, somacoluna);
            printf("\n");
        }

        printf("\nSoma = %d\n", somatotal);

        printf("Deseja realizar outra operação? [ s- Sim | n= Não]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
}