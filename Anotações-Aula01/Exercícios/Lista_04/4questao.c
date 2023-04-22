/*Nome: Ives Gabriel Figueiredo Santos Pinto

Assunto: Programa que calcule o SALDO de uma conta e para a sua operação com a entrada de valor "0", tendo como;
1° entrada saldo inicial
Operação de Credito incrementa valor
Operação de Debito decrementa valor
Taxa 0.35% por operação de debito.*/

#include <stdio.h>
#include <stdlib.h>

float saldoInicial, credito, creditoTotal = 0, debito, debitoTotal = 0, taxa = 0.65, saldoAtual = 0, saldoDebito =0, saldoCredito =0;
int operacao;

void inserirDados() {

    printf("Informe o saldo da conta bancária: ");
    scanf("%f", &saldoInicial);
    printf("Valor do Saldo Inicial: R$ +%.2f.\n", saldoInicial);
}

void calculoCredito(){
    printf("Informe o valor da operação de crédito: ");
    scanf("%f", &credito);
    creditoTotal += credito; 
    saldoCredito = saldoInicial + credito;
    printf("Operação: R$ +%.2f.\n", credito);
}

void calculoDebito() {
    pritf("Informe o valor da operação de débito: ");
    scanf("%f", &debito);
    debitoTotal += debito;
    saldoDebito = saldoInicial - debito;
    saldoDebito *= 0.0035;
    printf("Operação: R$ -%.2f", debito);
}

operacaoBancaria() {
    printf("\tQual operação bancária deseja realizar?\n\n[1] - Operação de crédito.\n[2] - Operação de débito.\n[0] - Finalizar operação.\n");
    scanf("%d", &operacao);
    switch(operacao)
    {
        case 1:
        calculoCredito();
        break;

        case 2: 
        calculoDebito();
        break;

        case 0:
        //FIM DE OPERAÇÃO, MOSTRAGEM DO SALDO FINAL, VALOR CREDITADOS, VALOR DEBITADOS, E VALOR DA TAXA A SER PAGA DAS TRANSAÇÕES DE DÉBITO. 
        break;
        
        default:
        printf("\nOpção inválida!\n");
        break;
    }
}


int main(void) {
system("cls");
    char retorno;

    inserirDados();

    do
    {


    
    }while(operacao == 0);
fimPrograma();
}