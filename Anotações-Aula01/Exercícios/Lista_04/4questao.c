/*Nome: Ives Gabriel Figueiredo Santos Pinto

Assunto: Programa que calcule o SALDO de uma conta e para a sua operação com a entrada de valor "0", tendo como;
1° entrada saldo inicial
Operação de Credito incrementa valor
Operação de Debito decrementa valor
Taxa 0.35% por operação de debito.*/

#include <stdio.h>
#include <stdlib.h>

float saldoInicial, credito, creditoTotal = 0, debito, debitoTotal = 0, taxa = 0.65, saldoAtual = 0, saldoDebito =0, saldoCredito =0;

void inserirDados() {

    printf("Informe o saldo da conta bancária: ");
    scanf("%f", &saldoInicial);
}

void calculoCredito(){
    printf("Informe o valor da operação de crédito: ");
    scanf("%f", &credito);
    creditoTotal += credito; 
    saldoCredito = saldoInicial + credito;
    saldoCredito *= 0.035;
}

void calculoDebito() {
    pritf("Informe o valor da operação de débito: ");
    scanf("%f", &debito);
    debitoTotal += debito;
    saldoDebito = saldoInicial - debito; 
}


int main(void) {
system("cls");
    char retorno;

    do
    {


     printf("Deseja realizar outra operação? [ s - Sim | n - Não ]\n");
     scanf(" %c", &retorno);
    }while(retorno != 'n' && retorno != 'N');
}