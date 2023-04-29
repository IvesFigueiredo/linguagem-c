/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Lista 05, Questão 03*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int n1, int n2)
{
    if (n2 == 0)
    {
        return n1;
    } else
    {
        return (mdc (n2, n1 % n2 ));
    }
}

int main(void)
{
    int num1, num2, resultado;
    char r;

    do
    {
    system("cls");

        printf("\t\tInforme dois valores para o calculo de MDC.\n\nInforme o primeiro número inteiro:\n");
        scanf("%d", &num1);
        printf("Informe o segundo número inteiro:\n");
        scanf("%d", &num2);

        resultado = mdc(num1, num2);

        printf("\nO MDC dos números %d e %d é igual a %d.\n", num1, num2, resultado);        

        printf("\nDeseja realizar outra operação de MDC? [ s - Sim | n - Não ]\n");
        scanf(" %c", &r);
    } while ( r != 'n' && r != 'N');
}