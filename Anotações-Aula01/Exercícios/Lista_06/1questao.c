/*Nome: Ives Gabriel FIgueiredo Santos Pinto
Assunto: 1ª Questão, lista 06 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

char palavra1[50], palavra2[50];

void inserirDados()
{

    printf("Digite uma palavra: ");
      scanf("%s", palavra1);
    printf("Digite outra palavra: ");
    scanf("%s", palavra2);
}

void concatenacao()
{

    strcat(palavra1, palavra2);
    printf(strcat(palavra1, " É a concatenização das palavras digitadas\n"));
}

int main(void)
{
    system("cls");
    char r;

    do
    {
        inserirDados();
        concatenacao();
        printf("\n\nDeseja repetir a operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &r);
    } while (r != 'n' && r != 'N');
}