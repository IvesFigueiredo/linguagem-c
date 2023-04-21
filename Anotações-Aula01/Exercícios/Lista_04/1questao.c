/*
Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Programa que paga R$ 19,50/hora - recolhe uma taxa 10% para imposto acima de R$ 1500,00. O programa recebe a quantidade de hora.
*/

#include <stdio.h>
#include <stdlib.h>

char retorno;
float valorH = 19.5, salBru = 0, salLiq = 0;
int hora;

void inserirDados()
{
    printf("Informe a quantidade de horas trabalhadas:\n");
    scanf("%d", &hora);
}
void calculoSalarioBruto()
{
    salBru = hora * valorH;
    printf("\nO valor do salário bruto: %.2f reais.\n", salBru);
}
void calculoSalarioliquido()
{
    if (salBru > 1500)
    {
        salLiq = salBru * 0.9;
    }
    else
    {
        salLiq = salBru;
    }
}
void mostragem()
{
    printf("O salário com as taxações: %.2f reais\n", salLiq);
}

int main(void)
{
    do
    {
        system("cls");
        salBru = 0, salLiq = 0;
        printf("\t\tCalculo de horas (Com taxa de 10%% em salários acima de 1500,00 reais.)\n\n");

        inserirDados();
        calculoSalarioBruto();
        calculoSalarioLiquido();
        mostragem();

        printf("\nDeseja realizar uma nova operação:\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
}