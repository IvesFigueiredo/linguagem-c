/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Questão 04, lista 06. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra1[60];
int qntd, i, num;

void inserirDados(){

    printf("\t\tPrograma para verificar a quantidade de vogais na palavra.\n\nDigite uma palavra: ");
    scanf("%s", palavra1);
}

void contagem(){

    qntd = 0;
    num = strlen(palavra1); 
    for(i = 0; i < num; i++)
    {
        if (palavra1[i] == 'a' || palavra1[i] == 'e' || palavra1[i] == 'i' || palavra1[i] == 'o' || palavra1[i] == 'u')
        {
            qntd++;
        }
    }
}

void exibir() {

    printf("\nA quantidade de vogais é(são) \"%d\".\n", qntd);
    if ( qntd == 0)
    {
        printf("\nNão há vogais nesta palavra.\n");
    }
}

int main(void) {
    char retorno;

    do
    {
system("cls");

    inserirDados();
    contagem();
    exibir();

     printf("\nDeseja realizar outra operação? [ s - Sim | n - Não ]\n");
     scanf(" %c", &retorno);
    }while(retorno != 'n' && retorno != 'N');
}