/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Programa para caixa de loja, onde o usuário irá informar os valores das mercadorias em uma variável, até ser digitado 0 para finalizar o incremento dos valores. E calcule o valor total, e a depender do valor realizar o desconto de valor <R$50,00 - 5% | valor <R$ 100,00 - 10% |valor < R$ 200,00 - 15% | valor > R$ 200,00 - 20%.
*/

#include <stdio.h>
#include <stdlib.h>
 
 int i=0;
float valorMercadoria, valorTotal=0, valorPago=0;

void inserirDados() {
    do
    {
        i++;
        printf("Informe o valor da %dª mercadoria: ",i);
        scanf("%f", &valorMercadoria);
        valorTotal += valorMercadoria ;
    } while (valorMercadoria != 0);
    
}
void calculoDesconto() {
    if(valorTotal < 50)
    {
        valorPago = valorTotal*0.95;
    }else if (valorTotal >= 50 && valorTotal < 100)
    {
        valorPago = valorTotal*0.9; 
    }else if (valorTotal >= 100 && valorTotal < 200)
    {
        valorPago = valorTotal*0.85;
    }else if (valorTotal >= 200)
    {
        valorPago = valorTotal*0.8;
    }else
    {
        printf("\nOperação inválida.\n");
    }
}
void mostragem() {
    printf("\nValor total: %.2f reais.\n",valorTotal);
    printf("Valor com desconto: %.2f reais.\n", valorPago);
}
void fimPrograma() 
{     printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n"); }

int main(void) {
system("cls");
    char retorno;

    do
    {
        printf("\t\tBem-Vindo ao Mercadinho B&B -- BOM e BARATO\n\n");
    inserirDados();
    calculoDesconto();
    mostragem();

     printf("\nDeseja realizar outra operação? [ s - Sim | n - Não ]\n");
     scanf(" %c", &retorno);
    }while(retorno != 'n' && retorno != 'N');
    fimPrograma();
}