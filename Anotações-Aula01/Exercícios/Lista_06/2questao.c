/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Questão 02, lista 06*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra1[60], inverso[60], r;
int i, qntd;

void inserirDados()
{
    memset(palavra1, '\0', sizeof(palavra1));
    memset(inverso, '\0', sizeof(inverso));
    /*palavra1[60] = "\0";
    inverso[60] = "\0";*/

    printf("\t\tPrograma para verificar se a palavra é palíndroma\n\nInforme uma palavra: ");
    scanf("%s", palavra1);
}

void verificar()
{
    qntd = 0;
    qntd = strlen(palavra1);

    for (i = qntd - 1; i >= 0; i--)
    {
        inverso[qntd - 1 - i] = palavra1[i];
    }

    if (strcmp(inverso, palavra1) == 0)
    {
        printf("A palavra \"%s\" é palíndroma. Pois é %s\n", palavra1, inverso);
    }
    else
    {
        printf("A palavra \"%s\" não é palíndroma. Pois é %s\n", palavra1, inverso);
    }
}

int main(void)
{
    do
    {
        system("cls");

        inserirDados();
        verificar();

        printf("\nDeseja verificar uma outra palavra [ s - Sim | n - Não ]\n");
        scanf(" %c", &r);
    } while (r != 'n' && r != 'N');
}