/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Lista 05, Questão 03*/

#include <stdio.h>
#include <stdlib.h>

int mdc()
{
    
}

int main(void)
{
    system("cls");

    int num1, num2, resultado;

    printf("\t\tInforme dois valores para o calculo de MDC.\n\nInforme o primeiro número inteiro:\n");
    scanf("%d", &num1);
    printf("Informe o segundo número inteiro:\n");
    scanf("%d", &num2);

    resultado = mdc();

    printf("\nO MDC dos números %d e %d é igual a %d.\n", num1, num2, resultado);


}