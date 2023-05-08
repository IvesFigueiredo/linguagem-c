/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Quuestão 05, lista 06*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra1[60];
int qntd;

void inserirDados()
{
    printf("\t\tPrograma que mostre a quantidade de caracteres.\n\nDigite uma palavra: ");
    scanf("%s", palavra1);
}

void contagem()
{
    qntd = 0;
    qntd = strlen(palavra1);
}

void exibir()
{
    printf("\nA quantidade de caracteres da palavra \"%s\" é \"%d\".\n", palavra1, qntd);
}

int main(void)
{
    char retorno;
    do
    {
        system("cls");
        inserirDados();
        contagem();
        exibir();

        printf("\nDeseja realizar outra operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
}