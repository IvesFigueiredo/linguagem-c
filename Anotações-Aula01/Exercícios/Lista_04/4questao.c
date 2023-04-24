/*Nome: Ives Gabriel Figueiredo Santos Pinto

Assunto: Programa que calcule o SALDO de uma conta e para a sua operação com a entrada de valor "0", tendo como;
1° entrada saldo inicial
Operação de Credito incrementa valor
Operação de Debito decrementa valor
Taxa 0.35% por operação de debito.*/

#include <stdio.h>
#include <stdlib.h>

float saldoInicial, saldoFinal, credito, creditoTotal = 0, debito, debitoTotal = 0, taxa = 0.0035, saldoDebito = 0, saldoCredito = 0, taxadebitoTotal = 0;
int operacao;
char retorno;

void fimPrograma()
{
    printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n");
}

void inserirDados()
{

    printf("Informe o saldo da conta bancária: ");
    scanf("%f", &saldoInicial);
    printf("Valor do Saldo Inicial: R$ +%.2f.\n", saldoInicial);
}

void calculoCredito()
{

    printf("Informe o valor da operação de crédito: ");
    scanf("%f", &credito);
    creditoTotal += credito;
    printf("Você está depositando R$ %.2f.\n", credito);
    system("pause");
}

void calculoDebito()
{
    printf("Informe o valor da operação de débito: ");
    scanf("%f", &debito);
    debitoTotal += debito;
    taxadebitoTotal = debitoTotal * 0.0035;
    printf("Você está retirando R$ %.2f.\n", debito);
    system("pause");
}

void operacaoBancaria()
{
    printf("\tQual operação bancária deseja realizar?\n\n[1] - Operação de crédito.\n[2] - Operação de débito.\n[3] - Extrato.\n[0] - Finalizar operação.\n");
    scanf("%d", &operacao);
    switch (operacao)
    {

    case 1:
        calculoCredito();
        break;

    case 2:
        calculoDebito();
        break;

    case 3:
        mostragem();
        break;

    case 0:
        printf("\nFSP ATM agradece a preferência. Até breve.\n");
        break;

    default:
        printf("\nOpção inválida!\n");
        system("pause");
        break;
    }
}

void mostragem()
{
    printf("Valor do Saldo Inicial: R$ +%.2f.\n", saldoInicial);
    printf("Operação de crédito: R$ +%.2f.\n", creditoTotal);
    printf("Operação de débito: R$ -%.2f.\n", debitoTotal);
    printf("Taxa de CPMF: R$ -%.2f.\n", taxadebitoTotal);
    saldoFinal = saldoInicial + creditoTotal - (debitoTotal + taxadebitoTotal);
    printf("Saldo Final: R$ %.2f.\n", saldoFinal);
    system("pause");
}

int main(void)
{
    system("cls");
    //   char retorno;

    inserirDados();

    do
    {
        system("cls");

        operacaoBancaria();

    } while (operacao != 0);
    fimPrograma();
}