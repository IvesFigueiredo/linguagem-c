// Nome: Ives Gabriel Figueiredo Santos Pinto
// Questão 02 Lista 02

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int vetor[5], num1, soma = 0, i;
    char retorno;

    do
    {
        system("cls");

        for (i = 0; i < 5; i++)
        {
            printf("Insira o %dº número de 5: ", i + 1);
            scanf("%d", &num1);
            vetor[i] = num1;
            soma += num1;
        }

        printf("\nOs números digitados foram:\n\n");

        for (i = 0; i < 5; i++)
        {
            printf("O %dº: %d\n", i + 1, vetor[i]);
        }
        printf("Somatório: %d\n", soma);

        printf("\nDeseja realizar outra operação? [ s - Sim | n- Não ]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');

    fimPrograma();
}

void fimPrograma()
{
    printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n");
}