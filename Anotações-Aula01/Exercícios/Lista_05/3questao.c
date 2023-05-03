/*Nome: Ives Gabriel Figueiredo Santos Pinto  
Assunto: Lista 05, Questão 03*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int n1, int n2)
{
    if (n2 == 0) // Pois sabemos que o maior número que divide o n1 é o próprio n1 e também qualquer número divide o 0. Logo mdc(a, 0) = 0
    {
        return n1; 
    } else  // mdc(a, b) --> mdc(b, %a) caso, o %a = 0, será a mesma coisa que a condição 01, mdc(b, 0) = b, também, caso o n1 > n2, no calculo ele troca de posição. 
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