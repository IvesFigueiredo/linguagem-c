/*Nome: Ives Gabriel Figueiredo Santos Pinto

Assunto: Programa que calcule o SALDO de uma conta e para a sua operação com a entrada de valor "0", tendo como;
1° entrada saldo inicial
Operação de Credito incrementa valor
Operação de Debito decrementa valor
Taxa 0.35% por operação de debito.*/

#include <stdio.h>
#include <stdlib.h>

float saldoInicial;

void inserirDados() {

    printf("Informe o saldo da conta bancária: ");
    scanf("%f", &saldoInicial);
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