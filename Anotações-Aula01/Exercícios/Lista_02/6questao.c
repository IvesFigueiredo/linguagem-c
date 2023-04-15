//Nome: Ives Gabriel Figueiredo Santos Pinto
//Questão 06 - Lista 02

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int ano;
    float preco, calc = 0, impost = 0;
    char retorno;

    do
    {
system("cls");
calc = 0;
impost=0;

        printf("\t\t\tCalcular o imposto para transferência de veículo.\n\nQual o ano do carro?\n");
        scanf("%d", &ano);

        if (ano < 1990 && ano >= 1886)
        {
            printf("Informe o valor do carro: ");
            scanf("%f", &preco);
            calc = preco*1.01;
            impost = calc - preco;
            printf("Valor do imposto a ser pago: R$ %.2f\n", impost);
        }else if (ano >= 1990)
        {
            printf("Informe o valor do carro: ");
            scanf("%f", &preco);
            calc = preco*1.015;
            impost = calc - preco;
            printf("Valor do imposto a ser pago: R$ %.2f\n", impost);
        }else
        {
            printf("Operação Inválida.\n");
        }

        printf("\nDeseja realizar outro processo? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
fimPrograma();
}

void fimPrograma() {     printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n"); }